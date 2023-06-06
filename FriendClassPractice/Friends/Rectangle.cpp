#include "Rectangle.h"
#include <iostream>
using namespace std;
Rectangle::Rectangle() {
	this->length = 1.0;
	this->width = 1.0;
}
Rectangle::Rectangle(double length, double width) {
	this->length = length;
	this->width = width;
}
double Rectangle::getLength() const {
	return length;
}
double Rectangle::getWidth() const {
	return width;
}
void Rectangle::setLength(double length) {
	this->length = length;
}
void Rectangle::setWidth(double width) {
	this->width = width;
}
double Rectangle::area() const {
	return length * width;
}
void Rectangle::print()const {
	for (int i = 0; i <= length / 0.5; i++) {
		cout << "|";
		for (int j = 0; j <= width / 0.5; j++) {
			cout << "==";
		}
		cout << "|" << '\n';
	}
	cout << '\n';
}
double Rectangle::perimeter() const {
	return 2 * (length + width);
}