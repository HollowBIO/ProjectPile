#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle {
	friend void changeToHundred(Rectangle& rect);
	friend void printData(Rectangle& rect);
	friend class RectHelper;
public:
	Rectangle();
	Rectangle(double length, double width);
	double getLength() const;
	double getWidth() const;
	void setLength(double length);
	void setWidth(double width);
	double area() const;
	void print()const;
	double perimeter()const;
private:
	double length;
	double width;
};

#endif // !RECTANGLE_H
