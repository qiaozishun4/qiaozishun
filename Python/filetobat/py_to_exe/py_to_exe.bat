@echo off
set "chores=1"
echo ����д����볢�Լ��Դ�ļ����Ҽ�����Ա���С�������롢����
echo 1:ֱ�Ӵ��(�Ƽ�)
echo 2:�޺ڴ���
echo 3.�����Զ���ͼ��
echo ��ѡ����ģʽ
choice /C:123>nul
set "chores=%errorlevel%"
echo �ļ�����Ҫ�������ţ�Ŀ¼�޿ո�
echo �ļ�(��·��������C:\mypy\mypy.py):
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
echo ���ִ���
pause
exit /b