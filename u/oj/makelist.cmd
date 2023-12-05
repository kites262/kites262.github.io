setlocal enabledelayedexpansion

del *.exe

set OutputFile=index.md
set BasePath=%cd%

echo Last Update at: %DATE% %TIME% > %OutputFile%
echo. >> %OutputFile%

for /r %%F in (*.*) do (
    set "FullPath=%%~dpnxF"
    set "RelativePath=%%F"
    set "RelativePath=!RelativePath:%BasePath%\=!"
    echo [%%~nxF](!RelativePath!^) >> %OutputFile%
    echo. >> %OutputFile%
)

endlocal
