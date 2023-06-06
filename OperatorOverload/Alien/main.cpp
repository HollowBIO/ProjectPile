#include "alien.h"
#include<iostream>
#include<vector>

using namespace std;

int main() {
	int weigth, heigth;
	char gender;
	Alien a1(200, 120, 'f');
	Alien a2(100, 200, 'm');
	Alien kid = a1 + a2;
	Alien kid2 = a2 + kid;
	Alien kid3 = kid + a1;

	cout << "a1==a2?" << boolalpha << (a1 == a2) << '\n';
	cout << "a1>kid3?" << boolalpha << (a1 > kid3) << '\n';
	cout << "kid2<a2?" << boolalpha << (kid2 < a2) << '\n';
	cout << "kid!=a1?" << boolalpha << (a1 != a2) << '\n';
	cout << "a1=>kid3?" << boolalpha << (a1 >= kid3) << '\n';
	cout << "kid2<=a2?" << boolalpha << (kid2 <= a2) << '\n';

	return 0;
}