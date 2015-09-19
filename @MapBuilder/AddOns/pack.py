import json
import os
import shutil
import subprocess
packlist = ["MapBuilder"]
for pack in packlist:
    abspath = os.path.abspath(".\\"+pack)
    subprocess.call(["C:\\Program Files (x86)\\Steam\\SteamApps\\common\\Arma 3 Tools\\AddonBuilder\\AddonBuilder.exe",
    abspath,
    os.path.abspath(".\\"),
    "-clear",
    "-packonly",
    "-project="+os.path.abspath(".."),
    "-prefix=mb\\mapbuilder"
    ])