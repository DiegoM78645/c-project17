#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
using namespace std;

class Circle :public Shape
{
private:
	double radius;
public:
	Circle();
	Circle(double newRadius);
	void setRadius(double theRadius);
	double getRadius() const;
	double getPerimeter();
	double getArea();
	double getVolume();
};

#endif // !CIRCLE_H