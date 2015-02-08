@echo off
echo Starting build...
::forfiles /p %WORKSPACE%\..\%JOB_NAME%_binned /c "cmd /c del @PATH /f /q"
::rmdir /s /q %WORKSPACE%\..\packing\escape2.altis
::cho Deleted old binned files
::xcopy %WORKSPACE% %WORKSPACE%\..\packing\escape2.altis /e /i /q

echo BUILD NR: %BUILD_NUMBER% > %WORKSPACE%\version.txt
echo COMMIT: %GIT_COMMIT% >> %WORKSPACE%\version.txt
echo BRANCH: %GIT_BRANCH% >> %WORKSPACE%\version.txt
echo BUILD INFO: %BUILD_URL% >> %WORKSPACE%\version.txt

del %WORKSPACE%\checkout\escape.altis\include\build.hpp /f /q
echo #define BUILD %BUILD_NUMBER% >> %WORKSPACE%\checkout\escape.altis\include\build.hpp

echo Copied over folder to binned folder
::"C:\Steam\SteamApps\common\Arma 3 Tools\FileBank\FileBank.exe" -dst "%WORKSPACE%" source "%WORKSPACE%\checkout\escape.altis"
"C:\Program Files (x86)\Bohemia Interactive\Tools\BinPBO Personal Edition\BinPBO.exe" "%WORKSPACE%\checkout\escape.altis" "%WORKSPACE%" -DEBUG -PREFIX ""
echo Created PBOs
xcopy "%WORKSPACE%\escape.altis.pbo" "C:\Server\Apache2.4\htdocs\escape.anzp.de\escape_build%BUILD_NUMBER%.altis.pbo*"
echo PBO copied to webserver
::forfiles /p %WORKSPACE%\..\%JOB_NAME%_binned /c "cmd /c if @ISDIR==TRUE rmdir /s /q @PATH"
::echo Removed binned folders
if not exist %WORKSPACE%\escape.altis.pbo exit /b 1