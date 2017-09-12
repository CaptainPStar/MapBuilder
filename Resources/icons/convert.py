#!/usr/bin/python

import os
import importlib
import pip
import subprocess

#### COLOR Constants for colored package ####
RED = 1
GREY = 8
YELLOW = 130
LIME = 46
WHITE = 15
###########

def colored_install():
    try:
        importlib.import_module('colored')
    except ImportError:
        pip.main(['install', 'colored'])
    finally:
        pass

def install_package(package):
    print('{}Checking package: {}{}'.format(fg(GREY), package, attr(0)))
    try:
        importlib.import_module(package)
    except ImportError:
        print('{}Installing package: {}{}'.format(fg(GREY), package, attr(0)))
        pip.main(['install', package])
    finally:
        print('{}Importing package: {}{}'.format(fg(GREY), package, attr(0)))
        globals()[package] = importlib.import_module(package)
    print('\n')


def create_terrainTemplates():
    print('')

def install_python_packages():
    print('{}Installing required Python packages...{}'.format(fg(YELLOW), attr(0)))

def select_base_folder():
    from tkinter import Tk, filedialog
    root = Tk()
    root.withdraw() #use to hide tkinter window

    currdir = os.getcwd()
    sourcefolder = filedialog.askdirectory(parent=root, initialdir=currdir, title='Please select a directory')
    if len(sourcefolder) > 0:
        return sourcefolder
    else:
        return None

def folder_walk(BaseFolder):
    os.chdir(BaseFolder)
    for root, subdires, files in os.walk(BaseFolder, followlinks=True):
        if root[0] == ".":
            continue
        for filename in files:
            if os.path.basename(root) == 'design':
                if filename.endswith('48px.svg'):
                    print('{}Found: {}{}'.format(fg(GREY), filename[3:-4], attr(0)))
                    category = os.path.basename(os.path.dirname(os.path.dirname(root)))
                    fileout = os.path.join(BaseFolder, "convert", category, '{}_{}_ca.png'.format('32', filename[3:-9]))
                    convert_svg(os.path.join(root, filename), fileout)
                continue


def convert_svg(filein, fileout):
    print('{}Proccessing to {}{}'.format(fg(LIME), fileout, attr(0)))
    subprocess.call(["C:\\Users\\Alwin\\AppData\\Roaming\\npm\\svgexport.cmd", filein, fileout, "32:32", "svg{fill:white}"])

if __name__ == '__main__':
    colored_install()
    from colored import fg, bg, attr
    install_python_packages()

    BaseFolder = select_base_folder()
    if BaseFolder == None:
        print('{}{}Need to select a folder to make templates for{}'.format(bg(RED), fg(WHITE), attr(0)))
        exit

    folder_walk(BaseFolder)

    print('End')
