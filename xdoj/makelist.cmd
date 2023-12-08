setlocal enabledelayedexpansion

del *.exe

set OutputFile=index.md
set BasePath=%cd%
echo # XDOJ_C List > %OutputFile%
echo. >> %OutputFile%
echo # 注意，此页面已移动到新的URL "<https://kites262.top/xdoj/>" >> %OutputFile%

REM echo Last Updated at > %OutputFile%
REM wmic os get localdatetime /value >> %OutputFile%

echo. >> %OutputFile%

for /r %%F in (*.*) do (
    set "FullPath=%%~dpnxF"
    set "RelativePath=%%F"
    set "RelativePath=!RelativePath:%BasePath%\=!"
    echo [%%~nxF](!RelativePath!^) >> %OutputFile%
    echo. >> %OutputFile%
)

endlocal
