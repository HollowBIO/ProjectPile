#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;

enum Race {Human, Shinigami, Quincy, Hollow, Fullbringer};

class Player {
public:
	Player(string name, int race, int HClass, int hitPoints, int manaPoints);
	string getName()const;
	Race getRace()const;
	string whatRace()const;
	int getHp()const;
	int getMp()const;
	string getClass()const;
	void setName(string name);
	void setRace(Race race);
	void setHp(int hp);
	void setMp(int mp);
	void setClass(int n);
	virtual string attack()const = 0;
private:
	string name;
	Race race;
	int hitPoints;
	int manaPoints;
	string HeroClass;
};

#endif
