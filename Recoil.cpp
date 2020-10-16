#include <ctime>
#include "Recoil.hpp"
#include "PolarityRecode.h"
using namespace System;
using namespace System::Windows::Forms;
bool isReload = false;
double randomized;
double randomized1;
double randomized2;
bool ReplacementFor_bSound = true;
void ReplacementFor_Sound(bool type) {
	if (type == true) {
		switch (ReplacementFor_bSound) {
		case(true):
			Beep(1000, 200);
		}
	}
	else {
		switch (ReplacementFor_bSound) {
		case(true):
			Beep(1200, 200);
		}
	}
	Sleep(120);
}

void ReplacementFor_Menu() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PolarityRecode::PolarityRecode form;
	Application::Run(% form);
}
void SleepFunc(int ms)
{
	LONGLONG ReplacementFor_timerResolution;
	LONGLONG ReplacementFor_wantedTime;
	LONGLONG ReplacementFor_currentTime;

	QueryPerformanceFrequency((LARGE_INTEGER*)&ReplacementFor_timerResolution);
	ReplacementFor_timerResolution /= 1000;

	QueryPerformanceCounter((LARGE_INTEGER*)&ReplacementFor_currentTime);
	ReplacementFor_wantedTime = ReplacementFor_currentTime / ReplacementFor_timerResolution + ms;
	ReplacementFor_currentTime = 0;
	while (ReplacementFor_currentTime < ReplacementFor_wantedTime)
	{
		QueryPerformanceCounter((LARGE_INTEGER*)&ReplacementFor_currentTime);
		ReplacementFor_currentTime /= ReplacementFor_timerResolution;
	}
}
void xRandomization(double ReplacementFor_delay, double ReplacementFor_control_time, int x, int y) {
	if (userRandom == 0) {
		randomized = 0;
	}
	else {
		randomized1 = rand() % userRandom;
		randomized2 = rand() % userRandom;
		randomized = (randomized1 - randomized2) / 25;
	}
	int ReplacementFor_x_ = randomized, ReplacementFor_y_ = randomized, ReplacementFor_t_ = randomized;
	for (int i = 1; i <= (int)ReplacementFor_control_time; ++i) {
		int ReplacementFor_xI = i * x / (int)ReplacementFor_control_time;
		int ReplacementFor_yI = i * y / (int)ReplacementFor_control_time;
		int ReplacementFor_tI = i * (int)ReplacementFor_control_time / (int)ReplacementFor_control_time;
		mouse_event(1, (int)ReplacementFor_xI - (int)ReplacementFor_x_, (int)ReplacementFor_yI - (int)ReplacementFor_y_, 0, 0);
		SleepFunc((int)ReplacementFor_tI - (int)ReplacementFor_t_);
		ReplacementFor_x_ = ReplacementFor_xI; ReplacementFor_y_ = ReplacementFor_yI; ReplacementFor_t_ = ReplacementFor_tI;
	}
	SleepFunc((int)ReplacementFor_delay - (int)ReplacementFor_control_time);
}

int ReplacementFor_IsMuzzleBoost(float Delay) {
	if (isMuzzleBoost == true) {
		float ReplacementFor_difference = Delay * 0.1f;
		Delay = Delay - ReplacementFor_difference;
		return (int)Delay + 2;
	}
	else
		return (int)Delay;
}

double ReplacementFor_BarrelAttachment() {
	if (isSuppressor == true) {
		if (isM249 == true)
			ReplacementFor_Multiplyer::ReplacementFor_Barrel.ReplacementFor_Suppressor = 0.75;
		if (isSMG == true)
			ReplacementFor_Multiplyer::ReplacementFor_Barrel.ReplacementFor_Suppressor = 0.85;
		if (isSimple == true || isHolo == true)
			return 0.75;
		if (is8x == true && isSuppressor == true)
			return 1.46;
		else
			return ReplacementFor_Multiplyer::ReplacementFor_Barrel.ReplacementFor_Suppressor;
	}
	else if (isMuzzleBoost == true) {
		return ReplacementFor_Multiplyer::ReplacementFor_Barrel.ReplacementFor_None;
	}
	else
		return ReplacementFor_Multiplyer::ReplacementFor_Barrel.ReplacementFor_None;
}
double ReplacementFor_ScopeAttachment() {
	if (is8x == true) {
		if (isSMG == true || isTHOMPSON == true) {
			if (is8x == true)
				return ReplacementFor_Multiplyer::ReplacementFor_Scope.ReplacementFor_x8 + 0.75;
		}
		return ReplacementFor_Multiplyer::ReplacementFor_Scope.ReplacementFor_x8;
	}
	else if (isSimple == true) {
		if (isSMG == true || isTHOMPSON == true) {
			if (isSimple == true)
				return ReplacementFor_Multiplyer::ReplacementFor_Scope.Simple + 0.1;
		}
		return ReplacementFor_Multiplyer::ReplacementFor_Scope.Simple;
	}
	else if (isHolo == true) {
		if (isSMG == true || isTHOMPSON == true) {
			if (isHolo == true)
				return ReplacementFor_Multiplyer::ReplacementFor_Scope.ReplacementFor_Holo + 0.3;
		}
		return ReplacementFor_Multiplyer::ReplacementFor_Scope.ReplacementFor_Holo;
	}
	else
		return ReplacementFor_Multiplyer::ReplacementFor_Scope.ReplacementFor_None;
}

namespace ReplacementFor_CurrentWeapon {
	double x(int Velocity) {
		if (isAK == true)
			return (((ReplacementFor_Recoil_Ak47[Velocity].x * ReplacementFor_ScopeAttachment()) * ReplacementFor_BarrelAttachment()) / 4) / ReplacementFor_UserSens;
		else if (isLR300 == true)
			return (((ReplacementFor_Recoil_Lr300[Velocity].x * ReplacementFor_ScopeAttachment()) * ReplacementFor_BarrelAttachment()) / 4) / ReplacementFor_UserSens;
		else if (isMP5 == true)
			return (((ReplacementFor_Recoil_Mp5a4[Velocity].x * ReplacementFor_ScopeAttachment()) * ReplacementFor_BarrelAttachment()) / 4) / ReplacementFor_UserSens;
		else if (isTHOMPSON == true)
			return (((ReplacementFor_Recoil_Thompson_g[Velocity].x * ReplacementFor_ScopeAttachment()) * ReplacementFor_BarrelAttachment()) / 4) / ReplacementFor_UserSens;
		else if (isSMG == true)
			return (((ReplacementFor_Recoil_Custom_g[Velocity].x * ReplacementFor_ScopeAttachment()) * ReplacementFor_BarrelAttachment()) / 4) / ReplacementFor_UserSens;
		else if (isM249 == true)
			return (((ReplacementFor_Recoil_M249[Velocity].x * ReplacementFor_ScopeAttachment()) * ReplacementFor_BarrelAttachment()) / 4) / ReplacementFor_UserSens;
		else if (isSemi == true)
			return (((ReplacementFor_Recoil_Semi_r[Velocity].x * ReplacementFor_ScopeAttachment()) * ReplacementFor_BarrelAttachment()) / 4) / ReplacementFor_UserSens;
		else
			return 0;
	}
	double y(int Velocity) {
		if (isAK == true)
			return (((ReplacementFor_Recoil_Ak47[Velocity].y * ReplacementFor_ScopeAttachment()) * ReplacementFor_BarrelAttachment()) / 4) / ReplacementFor_UserSens;
		else if (isLR300 == true)
			return (((ReplacementFor_Recoil_Lr300[Velocity].y * ReplacementFor_ScopeAttachment()) * ReplacementFor_BarrelAttachment()) / 4) / ReplacementFor_UserSens;
		else if (isMP5 == true)
			return (((ReplacementFor_Recoil_Mp5a4[Velocity].y * ReplacementFor_ScopeAttachment()) * ReplacementFor_BarrelAttachment()) / 4) / ReplacementFor_UserSens;
		else if (isTHOMPSON == true)
			return (((ReplacementFor_Recoil_Thompson_g[Velocity].y * ReplacementFor_ScopeAttachment()) * ReplacementFor_BarrelAttachment()) / 4) / ReplacementFor_UserSens;
		else if (isSMG == true)
			return (((ReplacementFor_Recoil_Custom_g[Velocity].y * ReplacementFor_ScopeAttachment()) * ReplacementFor_BarrelAttachment()) / 4) / ReplacementFor_UserSens;
		else if (isM249 == true)
			return (((ReplacementFor_Recoil_M249[Velocity].y * ReplacementFor_ScopeAttachment()) * ReplacementFor_BarrelAttachment()) / 4) / ReplacementFor_UserSens;
		else if (isSemi == true)
			return (((ReplacementFor_Recoil_Semi_r[Velocity].y * ReplacementFor_ScopeAttachment()) * ReplacementFor_BarrelAttachment()) / 4) / ReplacementFor_UserSens;
		else
			return 0;
	}
	double Delay() {
		if (isAK == true)
			return ReplacementFor_WeaponData::ReplacementFor_AK47.Delay;
		else if (isLR300 == true)
			return ReplacementFor_WeaponData::ReplacementFor_LR300.Delay;
		else if (isMP5 == true)
			return ReplacementFor_WeaponData::ReplacementFor_MP5.Delay;
		else if (isTHOMPSON == true)
			return ReplacementFor_WeaponData::ReplacementFor_THOMPSON.Delay;
		else if (isSMG == true)
			return ReplacementFor_WeaponData::ReplacementFor_CUSTOM_SMG.Delay;
		else if (isM249 == true)
			return ReplacementFor_WeaponData::ReplacementFor_M249.Delay;
		else if (isSemi == true)
			return ReplacementFor_WeaponData::ReplacementFor_SEMI.Delay;
		else
			return 0;
	}
	double Control(int Velocity) {
		if (isAK == true)
			return ReplacementFor_ControlTime_Ak47[Velocity];
		else if (isLR300 == true)
			return ReplacementFor_WeaponData::ReplacementFor_LR300.Delay;
		else if (isMP5 == true)
			return ReplacementFor_WeaponData::ReplacementFor_MP5.Delay;
		else if (isTHOMPSON == true)
			return ReplacementFor_WeaponData::ReplacementFor_THOMPSON.Delay;
		else if (isSMG == true)
			return ReplacementFor_WeaponData::ReplacementFor_CUSTOM_SMG.Delay;
		else if (isM249 == true)
			return ReplacementFor_WeaponData::ReplacementFor_M249.Delay;
		else if (isSemi == true)
			return ReplacementFor_WeaponData::ReplacementFor_SEMI.Delay;
		else
			return 0;
	}
	int Velocity() {
		if (isAK == true)
			return ReplacementFor_Recoil_Ak47.size() - 1;
		else if (isLR300 == true)
			return ReplacementFor_Recoil_Lr300.size() - 1;
		else if (isMP5 == true)
			return ReplacementFor_Recoil_Mp5a4.size() - 1;
		else if (isTHOMPSON == true)
			return ReplacementFor_Recoil_Thompson_g.size() - 1;
		else if (isSMG == true)
			return ReplacementFor_Recoil_Custom_g.size() - 1;
		else if (isM249 == true)
			return ReplacementFor_Recoil_M249.size() - 1;
		else if (isSemi == true)
			return ReplacementFor_Recoil_Semi_r.size() - 1;
		else
			return 0;
	}
	bool ReplacementFor_WeaponActive() {
		if (isAK == true || isLR300 == true || isMP5 == true || isTHOMPSON == true || isSMG == true || isSemi == true || isM249 == true)
			return true;
		else
			return false;
	}
	void ReplacementFor_RecoilBreak(int count) {
		if (isSemi == true) {
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
		}
		else if (isM249 == true) {
		}
		else if (isSemi != true || isM249 != true) {
			if (count == ReplacementFor_CurrentWeapon::Velocity()) {
				mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			}
		}
	}
};
bool ReplacementFor_RecoilExecution() {
	for (;;) {
		if (ReplacementFor_CurrentWeapon::ReplacementFor_WeaponActive() == true)
		{
			for (int i = 0; i <= ReplacementFor_CurrentWeapon::Velocity() && GetAsyncKeyState(VK_LBUTTON) & 0x8000 && GetAsyncKeyState(VK_RBUTTON) & 0x8000; i++)
			{
				xRandomization((int)ReplacementFor_IsMuzzleBoost((float)ReplacementFor_CurrentWeapon::Delay()), (int)ReplacementFor_IsMuzzleBoost(ReplacementFor_CurrentWeapon::Control(i)), (int)ReplacementFor_CurrentWeapon::x(i), (int)ReplacementFor_CurrentWeapon::y(i));
				ReplacementFor_CurrentWeapon::ReplacementFor_RecoilBreak(i);
			}
			Sleep(1);
		}
		Sleep(1);
	}
	return false;
}
LPCWSTR ReplacementFor_Procnamer = L"Polarity";
std::string ReplacementFor_Weapon = "NONE", ReplacementFor_Scope = "NONE", ReplacementFor_Barrel = "NONE", ReplacementFor_Sounds = "ON";
int main(array<String^>^ args) {
	time_t currentTime;
	struct tm* localTime;
	time(&currentTime);                   
	localTime = localtime(&currentTime);
	int Day = localTime->tm_mday;
	int Month = localTime->tm_mon + 1;
	int Year = localTime->tm_year + 1900;
	int Hour = localTime->tm_hour;
	int Min = localTime->tm_min;
	int Sec = localTime->tm_sec;
	TCHAR volumeName[MAX_PATH + 1] = { 0 };
	TCHAR fileSystemName[MAX_PATH + 1] = { 0 };
	DWORD serialNumber = 0;
	DWORD maxComponentLen = 0;
	DWORD fileSystemFlags = 0;
	if (GetVolumeInformation(
		_T("C:\\"),
		volumeName,
		ARRAYSIZE(volumeName),
		&serialNumber,
		&maxComponentLen,
		&fileSystemFlags,
		fileSystemName,
		ARRAYSIZE(fileSystemName)))
	{

	}
	//Second part gets the computer name
	TCHAR computerName[MAX_COMPUTERNAME_LENGTH + 1];
	DWORD size = sizeof(computerName) / sizeof(computerName[0]);
	if (GetComputerName(
		computerName,
		&size))
	{
	}
	if (Month == 1,2,3,4,5,6,7,8,9,10,11,12) {
			CreateThread(0, 0, (LPTHREAD_START_ROUTINE)ReplacementFor_Menu, 0, 0, 0);
			auto prior_ctx = GetThreadDpiAwarenessContext();
			SetThreadDpiAwarenessContext(DPI_AWARENESS_CONTEXT_PER_MONITOR_AWARE);
			SetThreadDpiAwarenessContext(prior_ctx);
			SetPriorityClass(GetCurrentProcess(), REALTIME_PRIORITY_CLASS);
			CreateThread(0, 0, (LPTHREAD_START_ROUTINE)ReplacementFor_RecoilExecution, 0, 0, 0);
			for (;;) {
				if (GetAsyncKeyState(VK_F2) != 0) {
					isAK = !isAK;
					if (isAK == true) {
						ReplacementFor_Weapon = "AK47";
						isLR300 = false; isMP5 = false; isSMG = false; isTHOMPSON = false; isSemi = false; isM249 = false;
					}
					else if (isAK == false) {
						ReplacementFor_Weapon = "NONE"; ReplacementFor_Scope = "NONE"; ReplacementFor_Barrel = "NONE";
						is8x = false; isHolo = false; isSimple = false; isSuppressor = false;
					}
					ReplacementFor_Sound(isAK);
				}
				if (GetAsyncKeyState(VK_F3) != 0) {
					isLR300 = !isLR300;
					if (isLR300 == true) {
						ReplacementFor_Weapon = "LR300";
						isMP5 = false; isSMG = false; isTHOMPSON = false; isSemi = false; isM249 = false; isAK = false;
					}
					else if (isLR300 == false) {
						ReplacementFor_Weapon = "NONE"; ReplacementFor_Scope = "NONE"; ReplacementFor_Barrel = "NONE";
						is8x = false; isHolo = false; isSimple = false; isSuppressor = false;
					}
					ReplacementFor_Sound(isLR300);
				}
				if (GetAsyncKeyState(VK_F4) != 0) {
					isMP5 = !isMP5;
					if (isMP5 == true) {
						ReplacementFor_Weapon = "MP5A4";
						isLR300 = false; isSMG = false; isTHOMPSON = false; isSemi = false; isM249 = false; isAK = false;
					}
					else if (isMP5 == false) {
						ReplacementFor_Weapon = "NONE"; ReplacementFor_Scope = "NONE"; ReplacementFor_Barrel = "NONE";
						is8x = false; isHolo = false; isSimple = false; isSuppressor = false;
					}
					ReplacementFor_Sound(isMP5);
				}
				if (GetAsyncKeyState(VK_F5) != 0) {
					isSMG = !isSMG;
					if (isSMG == true) {
						ReplacementFor_Weapon = "CUSTOM_SMG";
						isLR300 = false; isMP5 = false; isTHOMPSON = false; isSemi = false; isM249 = false; isAK = false;
					}
					else if (isSMG == false) {
						ReplacementFor_Weapon = "NONE"; ReplacementFor_Scope = "NONE"; ReplacementFor_Barrel = "NONE";
						is8x = false; isHolo = false; isSimple = false; isSuppressor = false;
					}
					ReplacementFor_Sound(isSMG);
				}
				if (GetAsyncKeyState(VK_F6) != 0) {
					isTHOMPSON = !isTHOMPSON;
					if (isTHOMPSON == true) {
						ReplacementFor_Weapon = "THOMPSON";
						isLR300 = false; isMP5 = false; isSMG = false; isSemi = false; isM249 = false; isAK = false;
					}
					else if (isTHOMPSON == false) {
						ReplacementFor_Weapon = "NONE"; ReplacementFor_Scope = "NONE"; ReplacementFor_Barrel = "NONE";
						is8x = false; isHolo = false; isSimple = false; isSuppressor = false;
					}
					ReplacementFor_Sound(isTHOMPSON);
				}
				if (GetAsyncKeyState(VK_F8) != 0) {
					isSemi = !isSemi;
					if (isSemi == true) {
						ReplacementFor_Weapon = "SEMI-AUTO-RIFLE";
						isLR300 = false; isMP5 = false; isSMG = false; isTHOMPSON = false; isM249 = false; isAK = false;
					}
					else if (isSemi == false) {
						ReplacementFor_Weapon = "NONE"; ReplacementFor_Scope = "NONE"; ReplacementFor_Barrel = "NONE";
						is8x = false; isHolo = false; isSimple = false; isSuppressor = false;
					}
					ReplacementFor_Sound(isSemi);
				}
				if (GetAsyncKeyState(VK_F7) != 0) {
					isM249 = !isM249;
					if (isM249 == true) {
						ReplacementFor_Weapon = "M249";
						isLR300 = false; isMP5 = false; isSMG = false; isTHOMPSON = false; isSemi = false; isAK = false;
					}
					else if (isM249 == false) {
						ReplacementFor_Weapon = "NONE"; ReplacementFor_Scope = "NONE"; ReplacementFor_Barrel = "NONE";
						is8x = false; isHolo = false; isSimple = false; isSuppressor = false;
					}
					ReplacementFor_Sound(isM249);
				}
				if (GetAsyncKeyState(VK_NUMPAD3) != 0) {
					is8x = !is8x;
					switch (is8x) {
					case(true):
						ReplacementFor_Scope = "8x"; isHolo = false; isSimple = false;
						break;
					case(false):
						ReplacementFor_Scope = "NONE";
						break;
					}
					ReplacementFor_Sound(is8x);
				}
				if (GetAsyncKeyState(VK_NUMPAD2) != 0) {
					isSimple = !isSimple;
					if (isSimple == true) {
						ReplacementFor_Scope = "SIMPLE"; is8x = false; isHolo = false;
					}
					else if (isSimple == false)
						ReplacementFor_Scope = "NONE";
					ReplacementFor_Sound(isSimple);
				}
				if (GetAsyncKeyState(VK_NUMPAD1) != 0) {
					isHolo = !isHolo;
					if (isHolo == true) {
						ReplacementFor_Scope = "HOLO"; is8x = false; isSimple = false;
					}
					else if (isHolo == false)
						ReplacementFor_Scope = "NONE";
					ReplacementFor_Sound(isHolo);
				}
				if (GetAsyncKeyState(VK_NUMPAD6) != 0) {
					isSuppressor = !isSuppressor;
					if (isSuppressor == true) {
						ReplacementFor_Barrel = "SILENCER"; isMuzzleBoost = false;
					}
					else if (isSuppressor == false)
						ReplacementFor_Barrel = "NONE";
					ReplacementFor_Sound(isSuppressor);
				}
				if (GetAsyncKeyState(VK_NUMPAD5) != 0) {
					isMuzzleBoost = !isMuzzleBoost;
					if (isMuzzleBoost == true) {
						ReplacementFor_Barrel = "Boost"; isSuppressor = false;
					}
					else if (isMuzzleBoost == false)
						ReplacementFor_Barrel = "NONE";
					ReplacementFor_Sound(isMuzzleBoost);
				}

				if (GetAsyncKeyState(VK_ADD) != 0) {
					ReplacementFor_bSound = !ReplacementFor_bSound;
					if (ReplacementFor_bSound == true) {
						ReplacementFor_Sounds = "ON";
					}
					else if (ReplacementFor_bSound == false) {
						ReplacementFor_Sounds = "OFF";
					}
					ReplacementFor_Sound(ReplacementFor_bSound);
				}
				Sleep(1);
			}
		}
		std::this_thread::sleep_for(std::chrono::milliseconds(0));
		
	}

 
