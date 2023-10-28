@echo off
setlocal enabledelayedexpansion

set OutputFile=index.md
del %OutputFile% 2>nul

for %%F in (*) do (
    echo [%%F](%%F^) >> %OutputFile%
)

endlocal
