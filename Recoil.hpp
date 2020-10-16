
#ifndef ReplacementFor_RECOIL_HPP
#define ReplacementFor_RECOIL_HPP
#include <vector>
#include <iostream>
#include <tchar.h>
#include <intrin.h>
#include <Windows.h>
#include <map>
#include <random>
#include <thread>
bool isAK = false;
bool isLR300 = false;
bool isMP5 = false;
bool isSMG = false; bool isTHOMPSON = false;
bool isSemi = false;
bool isM249 = false;
bool is8x = false;
bool isHolo = false;
bool isSimple = false;
bool isSuppressor = false;
bool isMuzzleBoost = false;
float ReplacementFor_UserSens;
int userRandom;
int regKey;

struct ReplacementFor_vec2
{
	int x;
	int y;
};

struct ReplacementFor_vec1
{
	double x;
	double y;
};

std::vector<ReplacementFor_vec1> ReplacementFor_Recoil_Ak47 = { {-69.0, 100.0},
{10.0, 92.0},
{-110.0, 83.0},
{-85.0, 75.0},
{0.0, 67.0},
{33.0, 57.0},
{58.0, 48.0},
{76.0, 39.0},
{84.0, 29.0},
{85.0, 19.0},
{76.0, 20.0},
{60.0, 37.0},
{34.0, 50.0},
{2.0, 59.0},
{-30.0, 65.0},
{-55.0, 67.0},
{-74.0, 64.0},
{-86.0, 59.0},
{-92.0, 49.0},
{-91.0, 34.0},
{-84.0, 17.0},
{-70.0, 10.0},
{-49.0, 28.0},
{-22.0, 42.0},
{24.0, 51.0},
{72.0, 56.0},
{97.0, 57.0},
{98.0, 51.0},
{77.0, 43.0} };

std::vector<double> ReplacementFor_ControlTime_Ak47 = { 121.96149709966872,92.6333814724611,138.60598637206294,113.37874368443146,66.25151186427745,66.29530438019354,75.9327831420658,85.05526144256157,
89.20256669256554,86.68010184667988,78.82145888317788,70.0451048111144,60.85979604582978,59.51642457624619,71.66762996283607,86.74060009403034,98.3363599080854,104.34161954944257,
104.09299204005345,97.58780746901739,85.48062700875559,70.4889202349561,56.56417811530545,47.386907899993936,56.63787408680247,91.5937793023631,112.38667610336424,111.39338971888095,
87.5067801164596 };

std::vector<ReplacementFor_vec2> ReplacementFor_Recoil_Lr300 = { {0, 50}, {-11, 60}, {-22, 67}, {-28, 59}, {-31, 50}, {-29, 42}, {-9, 38}, {-9, 30}, {23, 25}, {36, 24}, {35, 13}, {40, 19}, {18, 6}, {0, 17},
{-13, 6}, {-16, 5}, {-19, 6}, {-34, 12}, {-31, 2}, {-29, 5}, {-28, 0}, {-21, 5}, {-12, 13}, {-7, 0}, {19, 5}, {3, 11}, {61, 0}, {73, 0}, {54, 6}, {0, 8}, {50, 0} };

std::vector<ReplacementFor_vec2> ReplacementFor_Recoil_Mp5a4 = { {0, 43}, {0, 58}, {0, 65}, {25, 66}, {59, 58}, {63, 42}, {46, 27}, {3, 23}, {-37, 19}, {-47, 18}, {-40, 18}, {-8, 7}, {16, 12}, {28, 11},
{35, 9}, {34, 8}, {25, 6}, {12, 0}, {-4, 2}, {-6, 2}, {-18, 0}, {-27, 5}, {-26, 0}, {-27, 0}, {-20, 0}, {-32, 0}, {-12, 0}, {-25, 0}, {-4, 0}, {0, 0}, {43, 0} };

std::vector<ReplacementFor_vec2> ReplacementFor_Recoil_Custom_g = { {-28, 52}, {-10, 53}, {0, 53}, {11, 44}, {20, 45}, {22, 42}, {17, 35}, {7, 30}, {-9, 27}, {-13, 28}, {-23, 22}, {-21, 21}, {-15, 24},
{0, 13}, {20, 14}, {16, 12}, {29, 19}, {7, 6}, {11, 10}, {-4, 8}, {-8, 13}, {-7, 2}, {-13, 14} };

std::vector<ReplacementFor_vec2> ReplacementFor_Recoil_Thompson_g = { {-29, 63}, {-12, 61}, {9, 61}, {21, 55}, {25, 52}, {21, 43}, {5, 32}, {-16, 33}, {-24, 25}, {-24, 26}, {-14, 21}, {7, 17}, {16, 18},
{23, 16}, {25, 17}, {8, 16}, {-5, 5}, {-13, 15}, {-14, 8} };

std::vector<ReplacementFor_vec2> ReplacementFor_Recoil_Semi_r = { {0, 75}, {0, 75} };

std::vector<ReplacementFor_vec2> ReplacementFor_Recoil_M249 = { {0,58},{0,58} };

namespace ReplacementFor_WeaponData {
	struct {
		const double Delay = 133.3333;
	}ReplacementFor_AK47;
	struct {
		const int Delay = 118;
	}ReplacementFor_LR300;
	struct {
		const int Delay = 98;
	}ReplacementFor_MP5;
	struct {
		const int Delay = 99;
	}ReplacementFor_CUSTOM_SMG;
	struct {
		const int Delay = 127;
	}ReplacementFor_THOMPSON;
	struct {
		const int Delay = 150;
	}ReplacementFor_SEMI;
	struct {
		const int Delay = 103;
	}ReplacementFor_M249;
}

namespace ReplacementFor_Multiplyer {
	struct {
		double ReplacementFor_x8 = 3.84;
		double ReplacementFor_x16 = 7.68;
		double ReplacementFor_Holo = 1.2;
		double Simple = 0.8;
		double ReplacementFor_None = 1.0;
	}ReplacementFor_Scope;

	struct {
		double ReplacementFor_Suppressor = 0.8;
		double ReplacementFor_None = 1.0;
	}ReplacementFor_Barrel;
}
#endif;