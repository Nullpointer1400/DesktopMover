// Wallpaper.cpp : アプリケーションのエントリ ポイントを定義します。
//
#pragma comment(lib,"Winmm.lib")
#pragma comment(lib,"vfw32.lib")
#include "stdafx.h"
#include<stdio.h>
#include<Windows.h>
#include<iostream>
#include<cstdlib>
#include<string>
#include<string.h>
#include<locale.h>
#include<mmsystem.h>
#include<Vfw.h>
#include<tchar.h>
#include<time.h>
float fa = 0.064f * 1000;

void chac(wchar_t *f) {
	SystemParametersInfo(SPI_SETDESKWALLPAPER, 0,(void*)f, SPIF_UPDATEINIFILE);
	return;
}

void WindowInit() {
	
	OPENFILENAME of;
	char szFile[MAX_PATH] = "";
	ZeroMemory(&of, sizeof(of));
	of.lStructSize = sizeof(OPENFILENAME);
	of.lpstrFilter = TEXT("mp4(*.mp4)\0*.mp4\0");
	of.lpstrFile = (LPWSTR)szFile;
	of.nMaxFile = MAX_PATH;
	of.Flags = OFN_FILEMUSTEXIST;

	UINT timerid = 1;
	UINT tmer=16;
	
	if (GetOpenFileName(&of)) {
		
		
		
		return;
	}
	else
	{
		WindowInit();
		return;
	}

}
const float FRA = 15/1000;

		float FT = 0;
	LARGE_INTEGER times, timeE, timeF;
	std::string a = "C:\\BMPS\\$filename";
	std::string stef = ".bmp";
	wchar_t w[5000];
	char str[5000];

	void run(int i) {
		QueryPerformanceCounter(&timeE);
		std::string ste = std::to_string(i);

		
			



			std::string stdf = a + ste + stef;


			std::char_traits<char>::copy(str, stdf.c_str(), stdf.size() + 2);








			size_t wl = 0;

			mbstowcs_s(&wl, w, 50, str, 100);




			chac(w);
            DWORD sleepT = static_cast<DWORD>((FRA - FT) * 1000);
			timeBeginPeriod(1);

			Sleep(FRA);
			timeEndPeriod(1);
			
			
			
return;
		
		times = timeE;
	}

	

	int main()
	{







		int i = 0;
		PlaySound(L"C:\\BMPS\\pp.wav", NULL, SND_FILENAME | SND_ASYNC);




		if (QueryPerformanceCounter(&timeF) == FALSE) {
			return 0;
		}

		QueryPerformanceCounter(&times);
		for (i = 0; i <= 253; i++) {
			run(i);
			if (232 == i) {
				PlaySound(L"C:\\BMPS\\pp.wav", NULL, SND_FILENAME | SND_ASYNC);
				i = 0;
			}


			return 0;
		}
	}


