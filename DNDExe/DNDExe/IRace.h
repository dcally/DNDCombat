#ifndef FILE_H
#define FILE_H
#include "stdafx.h"
#include "header.h"
#include <stack>
#include<iostream>
#include<sstream>
#include<string>

enum RaceType {Elf, Dwarf, Human, Halfling};
static const char* EnumStrings[] = { "Elf", "Dwarf", "Human", "Halfling" };

const char* GetRaceText(int enumVal)
{
	return EnumStrings[enumVal];
}

using namespace std;

class IRace
{
public:
	IRace() {};
	IRace(int R) {
		HitPointMods = 0;
		ArmorClassMods = 0;
		HitBonusMods = 0;
		InitiativeBonusMods = 0;
		switch (R) {
		case 0 : 
			HitPointMods = 0;
			ArmorClassMods = 1;
			HitBonusMods = 2;
			InitiativeBonusMods = 2;
			break;
		case 1:
			HitPointMods = 2;
			ArmorClassMods = 2;
			HitBonusMods = 1;
			InitiativeBonusMods = 0;
			break;
		case 2:
			HitPointMods = 1;
			ArmorClassMods = 1;
			HitBonusMods = 1;
			InitiativeBonusMods = 1;
			break;
		case 3:
			HitPointMods = 0;
			ArmorClassMods = 1;
			HitBonusMods = 2;
			InitiativeBonusMods = 2;
			break;
		default:
			cout << "Invalid Race" << endl;
		}
	}

	virtual int GetHitPointMods() { 
		return HitPointMods; 
	}
	
	virtual int GetArmorClassMods() { 
		return ArmorClassMods; 
	}
	
	virtual int GetHitBonusMods() { 
		return HitBonusMods; 
	}
	
	virtual int GetInitiativeBonusMods() { 
		return InitiativeBonusMods; 
	}

	void setHitPointMods(int HPM) {
		HitPointMods = HPM;
	}

	void setArmorClassMods(int ACM) {
		ArmorClassMods = ACM;
	}

	void setHitBonusMods(int HBM) {
		HitBonusMods = HBM;
	}

	void setInitiativeBonus(int IBM) {
		InitiativeBonusMods = IBM;
	}

    ~IRace() {}
private:
	int HitPointMods;
	int ArmorClassMods;
	int HitBonusMods;
	int InitiativeBonusMods;
};

#endif