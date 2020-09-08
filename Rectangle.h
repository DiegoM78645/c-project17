#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"
using namespace std;
class Rectangle : public Shape
{
private:
	double length;
	double width;
	double hieght;
public:
	Rectangle();
	Rectangle(double newLength, double newWidth);
	void setLength(const double newLength);
	double getLength()const;
	void setWidth(const double newWidth);
	double getWidth()const;
	double getArea()const;
	double getPerimeter() const;
};
#endif // !RECTANGLE_H
