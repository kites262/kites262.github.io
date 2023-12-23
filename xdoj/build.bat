setlocal enabledelayedexpansion

del *.exe

set OutputFile=index.md

rem TITLE&DATE
echo # XDOJ_C List > %OutputFile%
echo. >> %OutputFile%

for /f "tokens=2 delims==" %%I in ('wmic os get localdatetime /value') do set "DateTime=%%I"
set "Year=%DateTime:~0,4%"
set "Month=%DateTime:~4,2%"
set "Day=%DateTime:~6,2%"
set "Hour=%DateTime:~8,2%"
set "Minute=%DateTime:~10,2%"
set "Second=%DateTime:~12,2%"
echo ^*Last updated at %Year%-%Month%-%Day% %Hour%:%Minute%:%Second%^* >> index.md
echo. >> %OutputFile%

rem PART Pins
echo ## Pinned Items: >> %OutputFile%
echo. >> %OutputFile%

for /r "Pins" %%F in (*.c) do (
    set "FullPath=%%~dpnxF"
    set "RelativePath=%%F"
    echo [%%~nxF](!RelativePath!^) >> %OutputFile%
	echo. >> %OutputFile%
)

rem PART Latest
echo ## Latest Items: >> %OutputFile%
echo. >> %OutputFile%

for %%F in (*.c) do (
    set "FullPath=%%~dpnxF"
    set "RelativePath=%%F"
    echo [%%~nxF](!RelativePath!^) >> %OutputFile%
	echo. >> %OutputFile%
)

rem PART Archived
echo ## Archived Items: >> %OutputFile%
echo. >> %OutputFile%

for /r "Archived" %%F in (*.c) do (
    set "FullPath=%%~dpnxF"
    set "RelativePath=Archived\%%~nxF"
    echo [%%~nxF](!RelativePath!^) >> %OutputFile%
	echo. >> %OutputFile%
)
