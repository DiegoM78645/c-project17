#ifndef CIRCLE_H

#include "Circle.h"

Circle::Circle() : Shape("Circle"), radius(0)
{}
Circle::Circle(double newRadius) : Shape("Circle"), radius(newRadius)
{}

void Circle::setRadius(double theRadius)
{
	radius = theRadius;
}

double Circle::getRadius() const
{
	return radius;
}

double Circle::getPerimeter()
{
	return 2 * 3.14159 * radius;
}

double Circle::getArea()
{
	return 3.14159 * pow(radius, 2.0);
}

double Circle::getVolume()
{
	return static_cast<double> (4) / 3 * 3.14159 * pow(radius, 3.0);
}
#endif // !CIRCLE_H