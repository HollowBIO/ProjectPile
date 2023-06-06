#ifndef WARRIOR_H
#define WARRIOR_H
#include "player.h"
using namespace std;

class Warrior : public Player {
public:
	Warrior(string name, int race, int HClass, int hitPoints, int manaPoints, int weapon) : Player(name, race, HClass, hitPoints, manaPoints) {
		if (weapon == 1) {
			this->weapon = "Katana";
		}
		else if (weapon == 2) {
			this->weapon = "Greatsword";
		}
		else if (weapon == 3) {
			this->weapon = "Spear";
		}
		else if (weapon == 4) {
			this->weapon = "Sword";
		}
		else if (weapon == 5) {
			this->weapon = "Gauntlets";
		}
	}
	string getWeapon()const {
		return weapon;
	}
	
	string attack()const {
		return "Doing a series of attack" ;
	}
private:
	string weapon;
};

#endif
