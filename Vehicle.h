#ifndef VEHICLE_H
#define VEHICLE_H

#include"Person.h"
#include<iostream>
#include <string>
using namespace std;

class Vehicle
{
private:
	string manufacturerName;
	Person owner;
	int numOfCylinder;
public:
	Vehicle();
	Vehicle(string  newManufacturer, Person newName, int newNum);
	void setManufacture(const string newManufacturer);
	string getManufacture() const;
	void setNumOfCylinder(const int newNum);
	int getNumOfCylinder() const;
	Person getOwner() const;
	void setOwner(const Person newName);
	Vehicle& operator=(const Vehicle & rtSide);
	friend istream& operator >>(istream& inStream, Vehicle& vehicleObject);
	friend ostream& operator <<(ostream& outStream, const Vehicle& vehicleObject);
};
#endif // !VEHICLE_H