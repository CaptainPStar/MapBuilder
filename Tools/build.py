#!/usr/bin/env python3

import os
import sys
import subprocess

"""
    Mapbuilder build script, use for dev purposes,
    Requires arma 3 tools
"""
######## GLOBALS #########
MAINDIR = "mb"
ADDONDIR = "@MapBuilder"
PROJECTDIR = "MapBuilder"
PBOPREFIX = ""
##########################

def mod_time(path):
    """Date change comparison"""
    if not os.path.isdir(path):
        return os.path.getmtime(path)
    maxi = os.path.getmtime(path)
    for p in os.listdir(path):
        maxi = max(mod_time(os.path.join(path, p)), maxi)
    return maxi


def check_for_changes(foldertopack, module):
    """Check if folder changed since the PBO was build"""
    if not os.path.exists(os.path.join(foldertopack, "{}{}.pbo".format(PBOPREFIX,module))):
        return True
    return mod_time(os.path.join(foldertopack, module)) > mod_time(os.path.join(foldertopack, "{}{}.pbo".format(PBOPREFIX,module)))

def find_bi_tools():
    """Find BI tools."""

    import winreg
    reg = winreg.ConnectRegistry(None, winreg.HKEY_CURRENT_USER)
    try:
        k = winreg.OpenKey(reg, r"Software\bohemia interactive\arma 3 tools")
        arma3tools_path = winreg.QueryValueEx(k, "path")[0]
        winreg.CloseKey(k)
    except:
        raise Exception("BadTools","Arma 3 Tools are not installed correctly.")

    addonbuilder_path = os.path.join(arma3tools_path, "AddonBuilder", "AddonBuilder.exe")
    dssignfile_path = os.path.join(arma3tools_path, "DSSignFile", "DSSignFile.exe")
    dscreatekey_path = os.path.join(arma3tools_path, "DSSignFile", "DSCreateKey.exe")
    cfgconvert_path = os.path.join(arma3tools_path, "CfgConvert", "CfgConvert.exe")

    if os.path.isfile(addonbuilder_path) and os.path.isfile(dssignfile_path) and os.path.isfile(dscreatekey_path) and os.path.isfile(cfgconvert_path):
        return [addonbuilder_path, dssignfile_path, dscreatekey_path, cfgconvert_path]
    else:
        raise Exception("BadTools","Arma 3 Tools are not installed correctly.")


def find_a3_install():
    """Find arma install location (Usually in some steam location)."""

    import winreg
    try:
        reg = winreg.ConnectRegistry(None, winreg.HKEY_LOCAL_MACHINE)
        key = winreg.OpenKey(reg,
                r"SOFTWARE\Wow6432Node\bohemia interactive\arma 3")
        return winreg.EnumValue(key,1)[1]
    except:
        print("Failed to determine Arma 3 Path.")
        return 1


def build_da_pbo(addonbuilder, foldertopack):
    """Builds PBOs using addonBuilder"""
    global made, failed, skipped, removed

    os.chdir(foldertopack)
    for p in os.listdir(foldertopack):
        path = os.path.join(foldertopack, p)
        if not os.path.isdir(path):
            continue
        if p[0] == ".":
            continue
        if not check_for_changes(foldertopack, p):
            skipped += 1
            print("  Skipping {}.".format(p))
            continue

        nopackfile = os.path.join(path, "$NOPACK$")
        if os.path.isfile(nopackfile):
            print("# No pack {} ...".format(p))
            continue

        print("# Making {} ...".format(p))

        # Check content of the PBOPREFIX file (why would BIS tools have built-in support for this modding standard?)
        if os.path.isfile(os.path.join(path, "$PBOPREFIX$.txt")):
            do_pboprefix = True
            pboprefix_file = open(os.path.join(path, "$PBOPREFIX$.txt"), 'r')
            pboprefix_path = (pboprefix_file.readlines()[0])[7:]
            print(pboprefix_path)
        else:
            do_pboprefix = False

        key = None
        do_binarize = False
        do_sign = False
        project_path = "-project="+os.path.abspath("..")

        try:
            cmd = [addonbuilder, path, os.path.abspath(".\\"), "-clear", project_path]
            if not do_binarize:
                cmd.append("-packonly")

            if do_sign:
                cmd.append("-sign="+key)

            if do_pboprefix:
                cmd.append("-prefix="+pboprefix_path)

            try:
                FNULL = open(os.devnull, 'w')
                subprocess.call(cmd, stdout=FNULL, stderr=subprocess.STDOUT)
            except:
                print("Module not successfully built.")
                raise
        except:
            failed += 1
            print("  Failed to make {}.".format(p))
        else:
            made += 1
            print("  Successfully made {}.".format(p))

def main():
    """Main build function"""
    print("""
  ###################
  # MapBuilder Build #
  ###################
""")


    scriptpath = os.path.realpath(__file__)
    projectpath = os.path.dirname(os.path.dirname(scriptpath))
    addonspath = os.path.join(projectpath, "addons")

    global made, failed, skipped, removed
    made = 0
    failed = 0
    skipped = 0
    removed = 0

    try:
        tools = find_bi_tools()
        addonbuilder = tools[0]
        dssignfile = tools[1]
        dscreatekey = tools[2]
        cfgconvert = tools[3]

    except:
        print("Arma 3 Tools are not installed correctly.")
        sys.exit(1)

    modpath = os.path.join(os.path.dirname(os.path.dirname(scriptpath)), ADDONDIR)
    addonspath = os.path.join(modpath, "AddOns")
    build_da_pbo(addonbuilder, addonspath)

    print("\n# Done.")
    print("  Made {}, skipped {}, removed {}, failed to make {}.".format(made, skipped, removed, failed))

    # repl = input("Press ANY key to exit")

if __name__ == "__main__":
    sys.exit(main())
