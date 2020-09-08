#ifndef SHAPE_H
#define SHAPE_H

#include<iostream>
#include <string>
using namespace std;

class Shape
{
private:
	string name;
public:
	Shape();
	Shape(string newName);
	string getName() const;
	void setName(string newName);
};

#endif // !SHAPE_H