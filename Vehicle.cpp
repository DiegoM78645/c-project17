#ifndef VEHICLE_H
#include "Vehicle.h"

Vehicle::Vehicle() : owner(), manufacturerName(" "), numOfCylinder(2)
{}

Vehicle::Vehicle(string newManufacturer, Person newName, int newNum) : owner(newName), manufacturerName(newManufacturer)
{
		if (newNum >= 2 && newNum <=30)
		numOfCylinder = newNum;
	else
		numOfCylinder = 2;
}

void Vehicle::setManufacture(const string newManufacturer)
{
	manufacturerName = newManufacturer;
}

string Vehicle::getManufacture() const
{
	return manufacturerName;
}

void Vehicle::setNumOfCylinder(const int newNum)
{
	if (newNum >= 2 && newNum <= 30)
		numOfCylinder = newNum;
	else
		numOfCylinder = 2;
}

int Vehicle::getNumOfCylinder() const
{
	return numOfCylinder;
}

Person Vehicle::getOwner() const
{
	return owner;
}

void Vehicle::setOwner(const Person newName)
{
	owner = newName;
}

Vehicle & Vehicle::operator=(const Vehicle & rtSide)
{
	this->manufacturerName = rtSide.manufacturerName;
	this->numOfCylinder = rtSide.numOfCylinder;
	this->owner = rtSide.getOwner();
	return *this;
}

istream & operator>>(istream & inStream, Vehicle & vehicleObject)
{
	cout << "\n\nEnter the name of the manufacturer: ";
	inStream >> vehicleObject.manufacturerName;
	cout << "\nEnter the name of the owner: ";
	inStream >> vehicleObject.owner;
	cout << "\nEnter the number of cylinders: ";
	inStream >> vehicleObject.numOfCylinder;
	return inStream;
}

ostream & operator<<(ostream & outStream, const Vehicle & vehicleObject)
{
	outStream << "\n\n======================================";
	outStream << "\nThe name of the manufacturer: ";
	outStream << vehicleObject.manufacturerName;
	outStream << "\nThe name of the owner: ";
	outStream << vehicleObject.owner;
	outStream << "\nThe number of cylinders: ";
	outStream << vehicleObject.numOfCylinder;
	

	return outStream;
}


#endif // !VEHICLE_H