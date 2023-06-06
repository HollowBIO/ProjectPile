#include "player.h"
using namespace std;

Player::Player(string name, int race, int HClass, int hitPoints, int manaPoints) {
	this->name = name;
	if (race == 1) {
		this->race = Human;
	}
	else if (race == 2) {
		this->race = Shinigami;
	}
	else if (race == 3) {
		this->race = Quincy;
	}
	else if (race == 4) {
		this->race = Hollow;
	}
	else if (race == 5) {
		this->race = Fullbringer;
	}
	this->hitPoints = hitPoints;
	this->manaPoints = manaPoints;
	if (HClass == 1) {
		this->HeroClass = "Warrior";
	}
	else if (HClass == 2) {
		this->HeroClass = "Caster";
	}
	else if (HClass == 3) {
		this->HeroClass = "MageFighter";
	}
}
string Player::getName()const {
	return name;
}
Race Player::getRace()const {
	return race;
}
string Player::whatRace()const {
	string back ="0";
	if (race == 0) {
		back = "Human";
		return back;
	}
	else if (race == 1) {
		back = "Shinigami";
		return back;
	}
	else if (race == 2) {
		back = "Quincy";
		return back;
	}
	else if (race == 3) {
		back = "Hollow";
		return back;
	}
	else if (race == 4) {
		back = "Fullbringer";
		return back;
	}
}
int Player::getHp()const {
	return hitPoints;
}
int Player::getMp()const {
	return manaPoints;
}
string Player::getClass()const {
	return HeroClass;
}
void Player::setName(string name) {
	this->name = name;
}
void Player::setRace(Race race) {
	this->race = race;
}
void Player::setHp(int hp) {
	hitPoints = hp;
}
void Player::setMp(int mp) {
	manaPoints = mp;
}
void Player::setClass(int n) {
	switch (n) {
	case 1:
		HeroClass = "Warrior";
	case 2:
		HeroClass = "Caster";
	case 3:
		HeroClass = "MageFighter";
	}
}
