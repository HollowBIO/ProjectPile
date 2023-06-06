#ifndef ALIEN_H
#define ALIEN_H
#include<ctime>
using namespace std;

class Alien
{
public:
	Alien(int weigth, int heigth, char gender);
	int getWeigth()const;
	int getHeigth()const;
	char getGender()const;
	int getPrestige()const;

	bool operator==(Alien& other)const;
	bool operator!=(Alien& other)const;
	bool operator>(Alien& other)const;
	bool operator<(Alien& other)const;
	bool operator>=(Alien& other)const;
	bool operator<=(Alien& other)const;
	Alien operator+(Alien& other)const;
	void operator=(Alien& other);

private:
	int weigth;
	int heigth;
	char gender;
};
#endif