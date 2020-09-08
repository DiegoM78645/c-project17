#ifndef RECTANGLE_H

#include "Rectangle.h"

Rectangle::Rectangle() : Shape("Rectangle"), length(0), width(0)
{}
Rectangle::Rectangle(double newLength, double newWidth) : Shape("Rectangle"), length(newLength), width(newWidth)
{}

void Rectangle::setLength(const double newLength)
{
	length = newLength;
}
double Rectangle::getLength() const
{
	return length;
}
void Rectangle::setWidth(const double newWidth)
{
	width = newWidth;
}
double Rectangle::getWidth() const
{
	return width;
}
double Rectangle::getArea() const
{
	return width * length;
}
double Rectangle::getPerimeter() const
{
	return 2 * (length + width);
}
#endif // !RECTANGLE_H