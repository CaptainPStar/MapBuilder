@echo off

SETLOCAL ENABLEDELAYEDEXPANSION

       :: DEFINE the following variables where applicable to your install

    SET SOURCE=.
    SET TARGET="C:\Users\Username\Documents\Arma 3 - Other Profiles\Playername\missions"
    SET ISLAND="VR"


:: _________________________________________________________

echo.
echo     Please enter the path to your ArmA-Mission-Folder
set /P TARGET=
echo     Please enter the island-name you want to edit
set /P ISLAND=
mklink /J "%TARGET%\MapBuilder.%ISLAND%" "%SOURCE%\MapBuilder.VR"
echo Complete
pause