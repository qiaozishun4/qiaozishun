@echo off
pip3.exe install pyinstaller
echo 1:�����ʾ����
echo 2:�����ʾ����
echo ��ѡ���������
choice /C:12>nul
set "chores=%errorlevel%"
if %chores% equ 1 (
    echo ��װ��ɣ�ллʹ��
	pause
	exit /b
) else (
	shutdown /r /t 0
)