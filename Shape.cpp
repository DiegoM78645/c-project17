#ifndef SHAPE_H

#include "Shape.h"

Shape::Shape() : name("Unkown")
{}
Shape::Shape(string newName) : name(newName)
{}

string Shape::getName() const
{
	return name;
}
void Shape::setName(string newName)
{
	name = newName;
}
#endif // !SHAPE_H