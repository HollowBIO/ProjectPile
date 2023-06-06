#include <iostream>
#include "player.h"
#include "caster.h"
#include "MageFighter.h"
#include "warrior.h"
#include <vector>

using namespace std;

int ChooseClass();
int ChooseRace();
string ChooseName();
int ChooseWeapon(int classChoise);
void printCharacter(Player* hero);
void doCleanUp(vector<Player*> characters);


int main() {
	bool run = true, check = true;
	vector<Player*> characters;
	int classChoise, raceChoise, weaponChoise;
	char OneMore ='b';
	string name;
	Player* charPtr = nullptr;

	cout << "======================\n";
	cout << "CREATE YOUR CHARACTERS\n";
	cout << "======================\n\n";

	while (run) {
		name = ChooseName();
		if (name == "0") {
			cout << "As you wish\n";
			break;
		}

		classChoise = ChooseClass();
		if (classChoise == 0) {
			cout << "As you wish\n";
			break;
		}

		raceChoise = ChooseRace();
		if (raceChoise == 0) {
			cout << "As you wish\n";
			break;
		}

		weaponChoise = ChooseWeapon(classChoise);
		if (weaponChoise == 0) {
			cout << "As you wish\n";
			break;
		}

		cout << "==================\n";
		cout << "Creating your hero\n";
		cout << "==================\n\n";
		Player* charPtr = nullptr;
		if (classChoise == 1) {
			Player* charPtr = new Warrior(name, raceChoise, classChoise, 250, 50, weaponChoise);
			characters.push_back(charPtr);
		}
		else if (classChoise == 2) {
			Player* charPtr = new Caster(name, raceChoise, classChoise, 100, 200, weaponChoise);
			characters.push_back(charPtr);
		}
		else if (classChoise == 3) {
			Player* charPtr = new MageFighter(name, raceChoise, classChoise, 150, 150, weaponChoise);
			characters.push_back(charPtr);
		}

		cout << "===================================\n";
		cout << "  Do you want to create one more?  \n";
		cout << "Enter 'y' for 'yes and 'n' for 'no'\n";
		cout << "===================================\n\n";
		while (check) {
			cin >> OneMore;
			if (OneMore == 'y' || OneMore == 'n') {
				check = false;
			}
		}

		check = true;

		if (OneMore == 'n') {
			run = false;
		}
	}
	
	for (Player* hero : characters) {
		printCharacter(hero);
	}

	doCleanUp(characters);

	return 0;
}
int ChooseClass() {
	int choise = -1;
	cout << "Choose your class:\n";
	cout << "\t1.Warrior - heavily armored, strong unit wich uses only melee weapons\n";
	cout << "\t2.Caster - wise mage wich can cast powerfull spells to attack enemies or help allies\n";
	cout << "\t3.MageFighter - more universal and selfsufficient unit, can you wide variety of weapons\n";
	cout << "\tbut with lighter armor and not so powerfull spells.\n";
	cout << "Enter '0' to exit\n";
	while (choise !=0 && choise != 1 &&choise !=2 &&choise!= 3) {
		cin >> choise;
	}
	return choise;
}
int ChooseRace() {
	int choise =-1;
	cout << "==============================================\n";
	cout << "Good, now please choose race of your character\n";
	cout << "==============================================\n\n";
	cout << "\t1.Human\n";
	cout << "\t2.Shinigami\n";
	cout << "\t3.Quincy\n";
	cout << "\t4.Hollow\n";
	cout << "\t5.Fullbringer\n";
	cout << "Enter '0' to exit\n";
	while (choise != 0 && choise != 1 && choise != 2 && choise != 3 && choise !=4 &&choise != 5) {
		cin >> choise;
	}
	return choise;
}
int ChooseWeapon(int classChoise) {
	int choise = -1;
	cout << "===================================\n";
	cout << "Now it`s time to choose your weapon\n";
	cout << "===================================\n\n";
	if (classChoise == 1) {
		cout << "\t1.Katana\n";
		cout << "\t2.Greatsword\n";
		cout << "\t3.Spear\n";
		cout << "\t4.Sword\n";
		cout << "\t5.Gaunlets\n";
		cout << "Enter '0' to exit\n";
		while (choise != 0 && choise != 1 && choise != 2 && choise != 3 && choise != 4 && choise != 5) {
			cin >> choise;
		}
	}
	else if (classChoise == 2) {
		cout << "\t1.Magic Staff\n";
		cout << "\t2.Arcane Bracelets\n";
		cout << "\t3.BookOfWizardry\n";
		cout << "Enter '0' to exit\n";
		while (choise != 0 && choise != 1 && choise != 2 && choise != 3) {
			cin >> choise;
		}
	}
	else if (classChoise == 3) {
		cout << "\t1.Kusarigama\n";
		cout << "\t2.Brass Knuckles\n";
		cout << "\t3.Katana\n";
		cout << "\t4.Dual Sword\n";
		cout << "\t5.Spear\n";
		cout << "\t6.Bow\n";
		cout << "\t7.Gauntlets\n";
		cout << "\t8.Dual Daggers\n";
		cout << "Enter '0' to exit\n";
		while (choise != 0 && choise != 1 && choise != 2 && choise != 3 && choise != 4 && choise != 5 && choise != 6 && choise != 7 && choise != 8) {
			cin >> choise;
		}
	}
	return choise;
}
string ChooseName() {
	string name;
	cout << "==========================\n";
	cout << "Give your character a name\n";
	cout << "     Enter '0' to exit    \n";
	cout << "==========================\n\n";
	cout << "Name:";
	cin >> name;
	return name;
}
void printCharacter(Player* hero) {
	string weapon, attack;
		cout << "==============================\n";
		cout << "Name: " << hero->getName() << '\n';
		cout << "Class: " << hero->getClass() << '\n';
		cout << "Race: " << hero->whatRace() << '\n';
		cout << "HP: " << hero->getHp() << '\n';
		cout << "MP: " << hero->getMp() << '\n';
		if (hero->getClass() == "Warrior") {
			weapon = ((Warrior*)hero)->getWeapon();
			attack = ((Warrior*)hero)->attack();
		}
		else if (hero->getClass() == "Caster") {
			weapon = ((Caster*)hero)->getWeapon();
			attack = ((Caster*)hero)->attack();
		}
		else if (hero->getClass() == "MageFighter") {
			weapon = ((MageFighter*)hero)->getWeapon();
			attack = ((MageFighter*)hero)->attack();
		}
		cout << "Weapon: " << weapon << '\n';
		cout << "Attack: " << attack << '\n';
		cout << "================================\n\n";
	}
void doCleanUp(vector<Player*> characters) {
	for (Player* hero : characters) {
		delete hero;
		hero = nullptr;
	}
	characters.clear();
}