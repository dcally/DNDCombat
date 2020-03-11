#ifndef FILE_H2
#define FILE_H2
#include "stdafx.h"
#include "header.h"
#include "IRace.h"
#include <stack>
#include<iostream>
#include<sstream>
#include<string>

using namespace std;

enum {Wiz, Rog, Cler, Fight};


class ICharacter : IRace{
public:
	ICharacter() {};
	ICharacter(int RT, int CT) {
		race = new IRace(RT);
		switch (CT) {
		case 0:
			//Good
			HitPoints = 15;
			ArmorClass = 10;
			//Decent
			HitBonus = 5;
			//Decent
			InitiativeBonus = 10;
			CTT = Wiz;
			break;
		case 1:
			//Bad
			HitPoints = 10;
			ArmorClass = 10;
			//Good
			HitBonus = 5;
			//Good
			InitiativeBonus = 15;
			CTT = Rog;
			break;
		case 2:
			//Good
			HitPoints = 15;
			ArmorClass = 10;
			//Bad
			HitBonus = 1;
			//Bad
			InitiativeBonus = 7;
			CTT = Cler;
			break;
		case 3:
			//Good
			HitPoints = 20;
			ArmorClass = 10;
			//Decent
			HitBonus = 3;
			//Decent
			InitiativeBonus = 10;
			CTT = Fight;
			break;
		}
		HitPoints = HitPoints + race->GetHitPointMods();
		ArmorClass = ArmorClass + race->GetArmorClassMods();
		HitBonus = HitBonus + race->GetHitBonusMods();
		InitiativeBonus = InitiativeBonus + race->GetInitiativeBonusMods();
	}
	virtual int GetHitPoints() {
		return HitPoints;
	}

	virtual int GetArmorClass() {
		return ArmorClass;
	}

	virtual int GetHitBonus() {
		return HitBonus;
	}

	virtual int GetInitiativeBonus() {
		return InitiativeBonus;
	}
	virtual void SubtractHitPoints(int Damage) {
		HitPoints = HitPoints - Damage;
	}
	virtual void Heal(int Amount) {
		HitPoints = HitPoints + Amount;
	}
	
	virtual bool IsWizard(){
		if (CTT == Wiz) {
			return true;
		}
	}

	virtual bool IsCler() {
		if (CTT == Cler) {
			return true;
		}
	}

	~ICharacter() {
		delete race;
		race = NULL;
	}


private:
	int HitPoints;
	int ArmorClass;
	int HitBonus;
	int InitiativeBonus;
	int CTT;
	IRace *race;
};

#endif
