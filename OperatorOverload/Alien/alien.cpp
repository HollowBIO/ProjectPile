#include "alien.h"
#include<iostream>
using namespace  std;

Alien::Alien(int weigth, int heigth, char gender) {
	this->heigth = heigth;
	this->weigth = weigth;
	this->gender = gender;
}
int Alien::getWeigth()const {
	return weigth;
}
int Alien::getHeigth()const {
	return heigth;
}
char Alien::getGender()const {
	return gender;
}
int Alien::getPrestige()const {
	int points=-1;
	if (gender == 'm') {
		points = 2;
	}
	else if (gender == 'f') {
		points == 3;
	}
	return heigth * weigth * points;
}
bool Alien::operator==(Alien& other)const {
	return getPrestige() == other.getPrestige();
}
bool Alien::operator!=(Alien& other)const {
	return getPrestige() != other.getPrestige();
}
bool Alien::operator>(Alien& other)const {
	return getPrestige() > other.getPrestige();
}
bool Alien::operator<(Alien& other)const {
	return getPrestige() < other.getPrestige();
}
bool Alien::operator>=(Alien& other)const {
	return getPrestige() >= other.getPrestige();
}
bool Alien::operator<=(Alien& other)const {
	return getPrestige() <= other.getPrestige();
}
Alien Alien::operator+(Alien& other)const{
	int kidWeigth = weigth + other.getWeigth() / 2;
	int kidHeigth = heigth + other.getHeigth() / 2;
	char kidGender = NULL;
	srand(time(0));

	int genderRand = rand() % 10 + 1;
	if (genderRand >= 3)
	{
		kidGender = 'f';
	}
	else {
		kidGender = 'm';
	}

	Alien kid(kidWeigth, kidHeigth, kidGender);
	return kid;
}
void Alien::operator=(Alien& other) {
	weigth = other.getWeigth();
	heigth = other.getHeigth();
	gender = other.getGender();
}