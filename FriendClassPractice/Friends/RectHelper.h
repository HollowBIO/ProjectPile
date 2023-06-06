#ifndef  RECTANGLE_HELPER_H
#define RECTANGLE_HELPER_H
#include<iostream>
#include "Rectangle.h"

using namespace std;
class RectHelper {
public:
	void modifyRect(Rectangle& rect) {
		int temp;
		cout << "Enter new length:";
		cin >> temp;
		rect.length = temp;
		cout << "Enter new width:";
		cin >> temp;
		rect.width = temp;
	}
};
#endif 
