#include <iostream>
#include "Rectangle.h"
#include "RectHelper.h"

using namespace std;

int main() {
	Rectangle r1(23, 10);
	RectHelper helper;
	cout << r1.area() << '\n';

	cout << "Now we use changeToHundred func:\n";
	changeToHundred(r1);

	cout << "Now area r1 equals:" << r1.area() << '\n';

	cout << "Now we use helper\n";
	helper.modifyRect(r1);
	cout << "New area is:" << r1.area()<<'\n' << '\n';

	printData(r1);

	return 0;
}
void changeToHundred(Rectangle& rect) {
	rect.length = 100;
	rect.width = 100;
}
void printData(Rectangle& rect) {
	cout << "Data on rectangle r1:\n";
	cout << "Length:" << rect.length << '\n';
	cout << "Width:" << rect.width << '\n';
	cout << "Area:" << rect.area() << '\n';
	cout << "Perimeter:" << rect.perimeter() << '\n';
}