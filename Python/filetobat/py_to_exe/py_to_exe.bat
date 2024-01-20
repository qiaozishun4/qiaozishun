@echo off
set "chores=1"
echo 如果有错误请尝试检查源文件、右键管理员运行、检查输入、重启
echo 1:直接打包(推荐)
echo 2:无黑窗口
echo 3.带有自定义图标
echo 请选择打包模式
choice /C:123>nul
set "chores=%errorlevel%"
echo 文件输入要求：无引号，目录无空格
echo 文件(带路径，例：C:\mypy\mypy.py):
set /p pyfile=
if %chores% equ 1 (
    powershell.exe /c pyinstaller.exe "%pyfile%" -F
	explorer.exe "%Systemroot%\System32\dist"
	exit /b
)
if %chores% equ 2 (
    powershell.exe /c pyinstaller.exe "%pyfile%" -w
	explorer.exe "%Systemroot%\System32\dist"
	exit /b
)
if %chores% equ 3 (
	echo Icon:
	set /p ico=
    powershell.exe /c pyinstaller.exe "%pyfile%" -i "%ico%"
	explorer.exe "%Systemroot%\System32\dist"
	exit /b
)
echo 出现错误！
pause
exit /b