@echo off
pip3.exe install pyinstaller
echo 1:最后提示黄字
echo 2:最后提示红字
echo 请选择输出内容
choice /C:12>nul
set "chores=%errorlevel%"
if %chores% equ 1 (
    echo 安装完成！谢谢使用
	pause
	exit /b
) else (
	shutdown /r /t 0
)