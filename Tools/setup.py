#!/usr/bin/env python3

"""
    Mapbuilder setup script, use for dev purposes,
    symlinks to correct paths so you can use file patching proplery
"""
#######################
#  MapBuilder Setup Script  #
#######################

import os
import sys
import subprocess
import winreg

######## GLOBALS #########
MAINDIR = "mb"
ADDONDIR = "@MapBuilder"
PROJECTDIR = "MapBuilder"
##########################


def create_link(link_name, target_element):
    """Creates the symbolic links from, to"""
    print('Creating link: {} => {}'.format(link_name, target_element))
    return subprocess.call(["cmd", "/c", "mklink", "/D", "/J", link_name, target_element])


def find_a3_install():
    """Find arma install location (Usually in some steam location)."""
    try:
        reg = winreg.ConnectRegistry(None, winreg.HKEY_LOCAL_MACHINE)
        key = winreg.OpenKey(reg, r"SOFTWARE\Wow6432Node\bohemia interactive\arma 3")
        armapath = winreg.EnumValue(key, 1)[1]
        winreg.CloseKey(key)
        return armapath
    except:
        print("Failed to determine Arma 3 Path.")
        return 1

def find_bi_tools():
    """Find BI tools."""
    try:
        reg = winreg.ConnectRegistry(None, winreg.HKEY_CURRENT_USER)
        key = winreg.OpenKey(reg, r"Software\bohemia interactive\arma 3 tools")
        armatoolspath = winreg.QueryValueEx(key, "path")[0]
        winreg.CloseKey(key)
        return armatoolspath
    except:
        raise Exception("BadTools", "Arma 3 Tools are not installed correctly.")

def find_workdrive(toolspath):
    """Finds the actual position of workdrive."""
    from configparser import ConfigParser
    from io import StringIO

    config = ConfigParser()
    with open(os.path.join(toolspath, "settings.ini"), 'r') as inputfile:
        inputfile = StringIO("[top]\n" + inputfile.read())
        config.readfp(inputfile)
        tempath = config['P_Drive']['P_DrivePath']        
        return tempath.replace('"', '')

def main():
    """Gets paths, creates symlinks"""
    fulldir = "{}\\{}".format(MAINDIR, PROJECTDIR)
    print("""
  ###########################################
  # MapBuilder Development Environment Setup #
  ###########################################

  This script will create your MapBuilder dev environment for you.

  This script will create two hard links on your system, both pointing to your MapBuilder project folder:
    [Arma 3 installation directory]\\{} => MapBuilder project folder
    [Arma 3 installation directory]\\{} => MapBuilder addons folder
    [Work Folder]\\{} => MapBuilder addons folder
  """.format(fulldir, ADDONDIR, PROJECTDIR))
    print("\n")


    armapath = find_a3_install()
    toolspath = find_bi_tools()
    scriptpath = os.path.realpath(__file__)
    basepath = os.path.dirname(os.path.dirname(scriptpath))
    modpath = os.path.join(basepath, ADDONDIR)
    addonspath = os.path.join(modpath, "AddOns")
    workdrive = find_workdrive(toolspath)

    print("# Detected Paths:")
    print("  Arma Path:     {}".format(armapath))
    print("  Project Path:  {}".format(addonspath))
    print("  Tools Path:  {}".format(toolspath))
    print("  Work Drive:  {}".format(workdrive))

    repl = input("\nAre these correct? (y/n): ")
    if repl.lower() != "y":
        return 3

    print("\n# Creating links ...")


    try:
        create_link(os.path.join(armapath, MAINDIR), addonspath)
        create_link(os.path.join(armapath, ADDONDIR), modpath)
        create_link(os.path.join(workdrive, PROJECTDIR), basepath)

    except:
        raise

    print("# Links created successfully.")

    return 0

if __name__ == "__main__":
    EXITCODE = main()

    if EXITCODE > 0:
        print("\nSomething went wrong during the setup. Make sure you run this script as administrator.")
    else:
        print("\nSetup successfully completed.")

    input("\nPress enter to exit ...")
    sys.exit(EXITCODE)
