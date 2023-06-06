#ifndef MAGEFIGHTER_H
#define MAGEFIGHTER_H
#include "player.h"
using namespace std;

class MageFighter : public Player {
public:
	MageFighter(string name, int race, int HClass, int hitPoints, int manaPoints, int weapon) : Player(name, race, HClass, hitPoints, manaPoints) {
		if (weapon == 1) {
			this->weapon = "Kusarigama";
		}
		else if (weapon == 2) {
			this->weapon = "Brass Knuckles";
		}
		else if (weapon == 3) {
			this->weapon = "Katana";
		}
		else if (weapon == 4) {
			this->weapon = "Dual Sword";
		}
		else if (weapon == 5) {
			this->weapon = "Spear";
		}
		else if (weapon == 6) {
			this->weapon = "Bow";
		}
		else if (weapon == 7) {
			this->weapon = "Gauntlets";
		}
		else if (weapon == 8) {
			this->weapon = "DualDaggers";
		}
	}
	string getWeapon()const {
		return weapon;
	}
	
	string attack()const {
		return "Launcheing a quick series of attacks";
	}
private:
	string weapon;
};

#endif
