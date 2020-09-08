#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
	string name;
public:
	Person();
	Person(string theName);
	Person(const Person& theObject);
	string getName() const;
	void setName(const string theName);
	Person& operator = (const Person& rtSide);
	friend istream& operator >>(istream& inStream,Person& PersonObject);
	friend ostream& operator <<(ostream& outStream,const Person& PersonObject);

};

#endif // !PERSON_H