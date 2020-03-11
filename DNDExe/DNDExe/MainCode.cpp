#include "stdafx.h"
#include<iostream>
#include "header.h"
#include "ICharacter.h"
#include <stack>
#include<sstream>
#include<string>
#include<vector>
#include "time.h"
#include <algorithm>

using namespace std;



class Wizard : public ICharacter {
public:
	Wizard(int RaceType) {
		Char = new ICharacter(RaceType, Wiz);
	}
	int GetHitPoints() {
		return Char->GetHitPoints();
	}
	int GetArmorClass() {
		return Char->GetArmorClass();
	}
	int GetInitiativeBonus() {
		return Char->GetInitiativeBonus();
	}
	int GetHitBonus() {
		return Char->GetHitBonus();
	}
	void SubtractHitPoints(int Damage) {
		Char->SubtractHitPoints(Damage);
	}
	~Wizard() {
		delete Char;
		Char = NULL;
	}
private:
	ICharacter *Char;
};


class Rogue : public ICharacter {
public:
	Rogue(int RaceType) {
		Char = new ICharacter(RaceType, Rog);
	}
	int GetHitPoints() {
		return Char->GetHitPoints();
	}
	int GetArmorClass() {
		return Char->GetArmorClass();
	}
	int GetInitiativeBonus() {
		return Char->GetInitiativeBonus();
	}
	int GetHitBonus() {
		return Char->GetHitBonus();
	}
	void SubtractHitPoints(int Damage) {
		Char->SubtractHitPoints(Damage);
	}
	~Rogue() {
		delete Char;
		Char = NULL;
	}
private:
	ICharacter* Char;
};


class Cleric : public ICharacter {
public:
	Cleric(int RaceType) {
		Char = new ICharacter(RaceType, Cler);
	}
	int GetHitPoints() {
		return Char->GetHitPoints();
	}
	int GetArmorClass() {
		return Char->GetArmorClass();
	}
	int GetInitiativeBonus() {
		return Char->GetInitiativeBonus();
	}
	int GetHitBonus() {
		return Char->GetHitBonus();
	}
	void SubtractHitPoints(int Damage) {
		Char->SubtractHitPoints(Damage);
	}
	~Cleric() {
		delete Char;
		Char = NULL;
	}
private:
	ICharacter* Char;
};


class Fighter : public ICharacter {
public:
	Fighter(int RaceType) {
		Char = new ICharacter(RaceType, Fight);
	}
	int GetHitPoints() {
		return Char->GetHitPoints();
	}
	int GetArmorClass() {
		return Char->GetArmorClass();
	}
	int GetInitiativeBonus() {
		return Char->GetInitiativeBonus();
	}
	int GetHitBonus() {
		return Char->GetHitBonus();
	}
	void SubtractHitPoints(int Damage) {
		Char->SubtractHitPoints(Damage);
	}
	~Fighter() {
		delete Char;
		Char = NULL;
	}
private:
	ICharacter* Char;
};

vector<ICharacter*> GetBlueTeam() {
	vector<ICharacter*> temp;
	int CT = 0;
	int RT = 0;
	cout << "Create Blue Team" << endl;
	for (int i = 0; i < 4; i++) {
		cout << "Enter " << i << "st Member Race: Elf(0), Dwarf(1), Human(2), Halfling(3)" << endl;
		cin >> RT;
		cout << "Enter " << i << "st Member Class: Wizard(0), Rogue(1), Cleric(2), Fighter(3)" << endl;
		cin >> CT;
		if (i == 0) {
			if (CT == 0) {
				Wizard* Blue1 = new Wizard(RT);
				temp.push_back(Blue1);
				cout << GetRaceText(RT) << " Wizard" << endl;
			}
			else if (CT == 1) {
				Rogue* Blue1 = new Rogue(RT);
				temp.push_back(Blue1);
				cout << GetRaceText(RT) << " Rogue" << endl;
			}
			else if (CT == 2) {
				Cleric* Blue1 = new Cleric(RT);
				temp.push_back(Blue1);
				cout << GetRaceText(RT) << " Cleric" << endl;
			}
			else if (CT == 3) {
				Fighter * Blue1 = new Fighter(RT);
				temp.push_back(Blue1);
				cout << GetRaceText(RT) << " Fighter" << endl;
			}
		}
		else if (i == 1) {
			if (CT == 0) {
				Wizard* Blue2 = new Wizard(RT);
				temp.push_back(Blue2);
				cout << GetRaceText(RT) << " Wizard" << endl;
			}
			else if (CT == 1) {
				Rogue* Blue2 = new Rogue(RT);
				temp.push_back(Blue2);
				cout << GetRaceText(RT) << " Rogue" << endl;
			}
			else if (CT == 2) {
				Cleric* Blue2 = new Cleric(RT);
				temp.push_back(Blue2);
				cout << GetRaceText(RT) << " Cleric" << endl;
			}
			else if (CT == 3) {
				Fighter* Blue2 = new Fighter(RT);
				temp.push_back(Blue2);
				cout << GetRaceText(RT) << " Fighter" << endl;
			}
		}
		else if (i == 2) {
			if (CT == 0) {
				Wizard* Blue3 = new Wizard(RT);
				temp.push_back(Blue3);
				cout << GetRaceText(RT) << " Wizard" << endl;
			}
			else if (CT == 1) {
				Rogue* Blue3 = new Rogue(RT);
				temp.push_back(Blue3);
				cout << GetRaceText(RT) << " Rogue" << endl;
			}
			else if (CT == 2) {
				Cleric* Blue3 = new Cleric(RT);
				temp.push_back(Blue3);
				cout << GetRaceText(RT) << " Cleric" << endl;
			}
			else if (CT == 3) {
				Fighter* Blue3 = new Fighter(RT);
				temp.push_back(Blue3);
				cout << GetRaceText(RT) << " Fighter" << endl;
			}
		}
		else if (i == 3) {
			if (CT == 0) {
				Wizard* Blue4 = new Wizard(RT);
				temp.push_back(Blue4);
				cout << GetRaceText(RT) << " Wizard" << endl;
			}
			else if (CT == 1) {
				Rogue* Blue4 = new Rogue(RT);
				temp.push_back(Blue4);
				cout << GetRaceText(RT) << " Rogue" << endl;
			}
			else if (CT == 2) {
				Cleric* Blue4 = new Cleric(RT);
				temp.push_back(Blue4);
				cout << GetRaceText(RT) << " Cleric" << endl;
			}
			else if (CT == 3) {
				Fighter* Blue4 = new Fighter(RT);
				temp.push_back(Blue4);
				cout << GetRaceText(RT) << " Fighter" << endl;
			}
		}
	}
	return temp;
}
vector<ICharacter*> GetRedTeam() {
	vector<ICharacter*> temp;
	int CT = 0;
	int RT = 0;
	cout << "Create Red Team" << endl;
	for (int i = 0; i < 4; i++) {
		cout << "Enter " << i + 1 << "st Member Race: Elf(0), Dwarf(1), Human(2), Halfling(3)" << endl;
		cin >> RT;
		cout << "Enter " << i + 1 << "st Member Class: Wizard(0), Rogue(1), Cleric(2), Fighter(3)" << endl;
		cin >> CT;
		if (i == 0) {
			if (CT == 0) {
				Wizard* Red1 = new Wizard(RT);
				temp.push_back(Red1);
				cout << GetRaceText(RT) << " Wizard" << endl;
			}
			else if (CT == 1) {
				Rogue* Red1 = new Rogue(RT);
				temp.push_back(Red1);
				cout << GetRaceText(RT) << " Rogue" << endl;
			}
			else if (CT == 2) {
				Cleric* Red1 = new Cleric(RT);
				temp.push_back(Red1);
				cout << GetRaceText(RT) << " Cleric" << endl;
			}
			else if (CT == 3) {
				Fighter* Red1 = new Fighter(RT);
				temp.push_back(Red1);
				cout << GetRaceText(RT) << " Fighter" << endl;
			}
		}
		else if (i == 1) {
			if (CT == 0) {
				Wizard* Red2 = new Wizard(RT);
				temp.push_back(Red2);
				cout << GetRaceText(RT) << " Wizard" << endl;
			}
			else if (CT == 1) {
				Rogue* Red2 = new Rogue(RT);
				temp.push_back(Red2);
				cout << GetRaceText(RT) << " Rogue" << endl;
			}
			else if (CT == 2) {
				Cleric* Red2 = new Cleric(RT);
				temp.push_back(Red2);
				cout << GetRaceText(RT) << " Cleric" << endl;
			}
			else if (CT == 3) {
				Fighter* Red2 = new Fighter(RT);
				temp.push_back(Red2);
				cout << GetRaceText(RT) << " Fighter" << endl;
			}
		}
		else if (i == 2) {
			if (CT == 0) {
				Wizard* Red3 = new Wizard(RT);
				temp.push_back(Red3);
				cout << GetRaceText(RT) << " Wizard" << endl;
			}
			else if (CT == 1) {
				Rogue* Red3 = new Rogue(RT);
				temp.push_back(Red3);
				cout << GetRaceText(RT) << " Rogue" << endl;
			}
			else if (CT == 2) {
				Cleric* Red3 = new Cleric(RT);
				temp.push_back(Red3);
				cout << GetRaceText(RT) << " Cleric" << endl;
			}
			else if (CT == 3) {
				Fighter* Red3 = new Fighter(RT);
				temp.push_back(Red3);
				cout << GetRaceText(RT) << " Fighter" << endl;
			}
		}
		else if (i == 3) {
			if (CT == 0) {
				Wizard* Red4 = new Wizard(RT);
				temp.push_back(Red4);
				cout << GetRaceText(RT) << " Wizard" << endl;
			}
			else if (CT == 1) {
				Rogue* Red4 = new Rogue(RT);
				temp.push_back(Red4);
				cout << GetRaceText(RT) << " Rogue" << endl;
			}
			else if (CT == 2) {
				Cleric* Red4 = new Cleric(RT);
				temp.push_back(Red4);
				cout << GetRaceText(RT) << " Cleric" << endl;
			}
			else if (CT == 3) {
				Fighter* Red4 = new Fighter(RT);
				temp.push_back(Red4);
				cout << GetRaceText(RT) << " Fighter" << endl;
			}
		}
	}
	return temp;
}

vector<ICharacter*> GetInitiativeOrder(vector<ICharacter*> Team) {
	vector<ICharacter*> Ordered;
	bool breaker = false;
	while (breaker == false) {
		for (int i = 0; i < Team.size(); i++) {
			if (i == 3) {
				breaker = true;
				break;
			}
			if (Team.at(i)->GetInitiativeBonus() > Team.at(i + 1)->GetInitiativeBonus()) {
				iter_swap(Team.begin() + i, Team.begin() + i + 1);
				break;
			}
		}
	}
	for (int i = 0; i < Team.size(); i++) {
		Ordered.push_back(Team.at(i));
	}

	return Ordered;
}


int main() {
	srand(time(NULL));
	//For the sake of making this easier, front row is the first two people on the team, back row is second two
	auto BlueTeam = GetBlueTeam();
	auto RedTeam = GetRedTeam();


	BlueTeam = GetInitiativeOrder(BlueTeam);
	RedTeam = GetInitiativeOrder(RedTeam);
	
	bool HasASideWon = false;
	int BlueTarget = 0;
	int RedTarget = 0;
	int HitAmount = 0;
	int cycletracker = 0;
	while (HasASideWon == false)
	{
		//Everyone attack person 1, then 2, then 3, then 4 until one side wins
		//Blue team person 1 goes, then red team 1 goes, then blue 2 goes, then red 2 goes, etc...
		for (int i = 0; i < 4; i++) {
			if (RedTarget != 4 && BlueTarget != 4) {
				if (BlueTeam[i]->GetHitPoints() > 0) {
					int HitChance = (rand() % 20) + BlueTeam[i]->GetHitBonus();
					if (HitChance > RedTeam[BlueTarget]->GetArmorClass()) {
						if (BlueTeam.at(i)->IsWizard()) {
							RedTeam.at(BlueTarget)->SubtractHitPoints(2);
						}
						else if (BlueTeam.at(i)->IsCler()) {
							BlueTeam.at(BlueTarget)->Heal(rand() % 2);
						}
						else {
							HitAmount = (rand() % 4) + BlueTeam.at(i)->GetHitBonus();
							RedTeam[BlueTarget]->SubtractHitPoints(HitAmount);
						}
						if (RedTeam[BlueTarget]->GetHitPoints() <= 0) {
							cout << "Blue" << i << " beat Red" << BlueTarget << endl;
							BlueTarget++;
						}
					}
				}
			}
			if (BlueTarget != 4 && RedTarget != 4) {
				if (RedTeam[i]->GetHitPoints() > 0) {
					int HitChance = (rand() % 20) + RedTeam[i]->GetHitBonus();
					if (HitChance > BlueTeam[RedTarget]->GetArmorClass()) {
						if (RedTeam.at(i)->IsWizard()) {
							BlueTeam.at(RedTarget)->SubtractHitPoints(2);
						}
						else if (RedTeam.at(i)->IsCler()) {
							RedTeam.at(RedTarget)->Heal(rand() % 2);
						}
						else {
							HitAmount = (rand() % 4) + RedTeam.at(i)->GetHitBonus();
							BlueTeam[RedTarget]->SubtractHitPoints(HitAmount);
						}
						if (BlueTeam[RedTarget]->GetHitPoints() <= 0) {
							cout << "Red" << i << " beat Blue" << RedTarget << endl;
							RedTarget++;
						}
					}
				}
			}
			cycletracker++;
		}
		//That is 1 combat phase
		if (BlueTarget == 4) {
			HasASideWon = true;
			cout << "Blue Team Won" << endl;
		}
		if (RedTarget == 4) {
			HasASideWon = true;
			cout << "Red Team Won" << endl;
		}
	}
	

	for (int i = 0; i < BlueTeam.size(); i++){
		BlueTeam.at(i)->~ICharacter();
		BlueTeam.at(i) = NULL;
	}
	for (int i = 0; i < RedTeam.size(); i++) {
		RedTeam.at(i)->~ICharacter();
		RedTeam.at(i) = NULL;
	}

	cout << "Battle Cycles : " << cycletracker << endl;

	

	return 0;

}
