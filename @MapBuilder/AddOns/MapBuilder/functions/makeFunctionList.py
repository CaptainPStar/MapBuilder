import os
folders = {}
for root, dirs, files in os.walk(".", topdown=False):
    for name in files:
        foldername  = os.path.split(root)[1]
        fileextension = os.path.splitext(name)[1]
        filename = os.path.splitext(name)[0]
        if not filename.startswith('.'):
            if fileextension == ".sqf":

                if not foldername in folders:
                    folders[foldername] = []
                folders[foldername].append(os.path.splitext(name)[0])
f = open('generated.hpp', 'w')


for folder,files in folders.items():
    f.write("class " + folder+"\n");
    f.write("{\n");
    f.write("\tfile = \"mb\\mapbuilder\\functions\\" + folder+"\";\n")
    for file in files:
        f.write("\tclass "+file.replace("fn_","")+" {\n")
        f.write("\t\trecompile = 1;\n")
        f.write("\t};\n")
    f.write("};\n")
f.close()
