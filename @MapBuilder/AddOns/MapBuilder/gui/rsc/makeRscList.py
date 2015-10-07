import os
folders = {}
f = open('resources.hpp', 'w')
for root, dirs, files in os.walk("."):
    for name in files:   
        fileextension = os.path.splitext(name)[1]
        filename = os.path.splitext(name)[0]
        if fileextension == ".hpp" and filename != "resources":
            f.write("#include \""+name+"\"\n") 
f.close()