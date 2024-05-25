@echo off
echo You Can change this later!

setlocal enabledelayedexpansion

set /p packName="What would you like to call the texture pack? "

set /p packAuthors="Who are the texture pack authors? "

set /p packDescription="Enter the texture pack description: "


set "packDir=%packName%"
md "%packDir%"
md "%packDir%\Resources"

(
    echo {
    echo     "name": "%packName%",
    echo     "authors": "%packAuthors%",
    echo     "description": "%packDescription%",
    echo }
) > "%packDir%\pack.json"

set "imageURL=https://raw.githubusercontent.com/MuhXd/BetterTexturePacks/main/images/logo.png"
powershell -command "& { Invoke-WebRequest '%imageURL%' -OutFile '%packDir%\pack.png' }"

if %ERRORLEVEL% NEQ 0 (
    echo Failed to download image from GitHub.
    exit /b 1
)

echo Texture pack structure for %packName% created successfully.
echo Please use Compile.bat to compile it
pause
