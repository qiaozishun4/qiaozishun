#include<bits/stdc++.h>
#include<tchar.h>
#include<windows.h>
using namespace std;
//先声明那一大堆线程函数 
void *StartEdge(void *args);
void *StartSystemApps(void *args);
void *PlaySystemSounds(void *args);
void *RandKeybdEvent(void *args);
void *Distinvert(void *args);
void *RandMsgBx(void *args);
void *DrawIco(void *args);
void *StretchDesk(void *args);
void *PutDeskRandPosPhotoToRandPos(void *args);
double GetDF();//这个是获取缩放率的，免得到时候显示异常 
double DF;//这个就是缩放率，几个线程都要用它，所以把它声明到主函数外 
int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow)//无毒版猫虹彩病毒主函数盛大开幕!! 
{
	DF=GetDF();
	//Step 1:显示确认运行弹窗
	int x;
	while(1)
	{
		x=MessageBox(NULL,"恭喜你看到这个宝贵作品！\n此作品为高仿版彩虹猫病毒\n\
不过作者只是想让你们欣赏欣赏这个上古病毒，并不想破坏你的电脑，所以编写了这个高仿版彩虹猫.\n\
\n\
对了，作者为了编写此程序把头都快抠破了，写了整整一个上午啊…………所以……你一定要点个赞或者关个注，这样才能给我动力！毕竟……C站好作者不多了\n\
是否运行？","Nyan Cat",MB_ICONINFORMATION|MB_OKCANCEL); 
		if(x==IDOK)
			break;
		else
			MessageBox(NULL,"打都打开了，你必须运行!","Nyan Cat",MB_ICONERROR|MB_OK);
	}
	//Step 2:写入提示文件
	freopen("Note.txt","w",stdout);
	cout<<"程序已经运行！\n你的电脑……还可以再次启动 毕竟这是无害版\n:D\n在原版病毒里，结束病毒进程\
会直接导致电脑蓝屏并重启，然后……由于MBR被破坏，电脑就启动不了了，但我不会，\
我是无害版彩虹猫，所以你随时可以从任务管理器里结束我，我也不会破坏你的MBR!";
	fclose(stdout);
	system("start Note.txt"); 
	
	Sleep(10000);
	pthread_t tids[10];
	
	//Step 3:连续打开20次网站
	pthread_create(&tids[0],NULL,StartEdge,NULL);//创建线程，详细代码在线程函数里 
	
	Sleep(20000);
	
	//Step 4:随机打开系统应用
	pthread_create(&tids[1],NULL,StartSystemApps,NULL);//创建线程，详细代码在线程函数里
	
	Sleep(10000);
	
	//Step 5:随机播放系统提示音 
	pthread_create(&tids[2],NULL,PlaySystemSounds,NULL);//创建线程，详细代码在线程函数里
	
	//Step 6:随机按下键盘中的一个键
	pthread_create(&tids[3],NULL,RandKeybdEvent,NULL);//创建线程，详细代码在线程函数里
	
	Sleep(5000);
	
	//Step 7:屏幕反色
	pthread_create(&tids[4],NULL,Distinvert,NULL);//创建线程，详细代码在线程函数里
	
	//Step 8:乱弹提示窗口
	pthread_create(&tids[5],NULL,RandMsgBx,NULL);//创建线程，详细代码在线程函数里 
	
	Sleep(10000);
	
	//Step 9:画图标
	pthread_create(&tids[6],NULL,DrawIco,NULL);//创建线程，详细代码在线程函数里
	
	Sleep(20000);
	
	//Step 10:屏幕向中心收缩
	pthread_create(&tids[7],NULL,StretchDesk,NULL);//创建线程，详细代码在线程函数里 
	
	Sleep(10000);
	
	//Step 11:把屏幕任意一块位置贴到另一个位置
	pthread_create(&tids[8],NULL,PutDeskRandPosPhotoToRandPos,NULL);//创建线程，详细代码在线程函数里
	
	Sleep(30000);
	//提示是否退出
	int msg;
	msg=MessageBox(NULL,"程序所有环节都已展示完毕，按确定键退出.","Nyan Cat",MB_ICONINFORMATION|MB_OK); 
	return 0;//程序退出 
}
//编写那一大堆线程函数
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
