@echo off
setlocal enabledelayedexpansion

set OutputFile=index.md
del %OutputFile% 2>nul

for /f %%F in ('dir /b /on') do (
    echo [%%F](%%F^) >> %OutputFile%
    echo.>> %OutputFile%
)

endlocal
