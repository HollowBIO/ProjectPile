#ifndef CASTER_H
#define CASTER_H
#include "player.h"
using namespace std;

class Caster : public Player {
public:
	Caster(string name, int race, int HClass, int hitPoints, int manaPoints, int weapon) : Player(name, race, HClass, hitPoints, manaPoints) {
		if (weapon == 1) {
			this->weapon = "Magic Staff";
		}
		else if (weapon == 2) {
			this->weapon = "Arcane Bracelets";
		}
		else if (weapon == 3) {
			this->weapon = "Book Of Wizardry";
		}
	}
	string getWeapon()const {
		return weapon;
	}
	
	string attack()const {
		return "Casting a powerfull spell";
	}
private:
	string weapon;
};

#endif
