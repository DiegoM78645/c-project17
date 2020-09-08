#ifndef PERSON_H
#include "Person.h"

Person::Person() : name(" ")
{}

Person::Person(string theName)
{
	name = theName;
}

Person::Person(const Person & theObject)
{
	name = theObject.name;
}

string Person::getName() const
{
	return name;
}

void Person::setName(const string theName)
{
	name = theName;
}

Person & Person::operator=(const Person & rtSide)
{
	this->name = rtSide.name;
	return *this;
}

istream & operator>>(istream & inStream, Person & PersonObject)
{
	inStream >> PersonObject.name;
	return inStream;
}

ostream & operator<<(ostream & outStream, const Person & PersonObject)
{
	outStream << PersonObject.name;
	return outStream;
}

#endif // !PERSON_H