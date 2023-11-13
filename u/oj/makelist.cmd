@echo off
setlocal enabledelayedexpansion

del *.exe

set OutputFile=index.md
set BasePath=%cd%
del %OutputFile% 2>nul

for /r %%F in (*.*) do (
    set "FullPath=%%~dpnxF"
    set "RelativePath=%%F"
    set "RelativePath=!RelativePath:%BasePath%\=!"
    echo [%%~nxF](!RelativePath!^) >> %OutputFile%
    echo. >> %OutputFile%
)

endlocal
