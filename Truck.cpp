#ifndef TRUCK_H
#include "Truck.h"

Truck::Truck(): Vehicle(),loadCapacitiy(1), towingCapacitiy(1)
{}

Truck::Truck(string newManufacturer, Person newowner, int newNum, double newLoad, int newTowing) : Vehicle(newManufacturer, newowner, newNum)
{
	if (newLoad > 0)
		loadCapacitiy = newLoad;
	else
		loadCapacitiy = 1;

	if (newTowing > 0)
		towingCapacitiy = newTowing;
	else
		towingCapacitiy = 1;
}

int Truck::getTowing() const
{
	return towingCapacitiy;
}

void Truck::setTowing(const int newNum)
{
	if (newNum > 0)
		towingCapacitiy = newNum;
	else
		towingCapacitiy = 1;
}

double Truck::getload() const
{
	return loadCapacitiy;
}

void Truck::setload(const double newNum)
{
	if (newNum > 0)
		loadCapacitiy = newNum;
	else
		loadCapacitiy = 1;
}


Truck & Truck::operator=(const Truck & rtSide)
{
	Vehicle:: operator =(rtSide);
	this->towingCapacitiy = rtSide.towingCapacitiy;
	this->loadCapacitiy = rtSide.loadCapacitiy;
	return *this;
}

istream & operator >>(istream & inStream, Truck & truckObject)
{
	Person Ptemp;
	string Stemp;
	int Itemp;

	cout << "\n\nEnter the name of the manufacturer: ";
	inStream >> Stemp;
	cout << "\nEnter the name of the owner: ";
	inStream >> Ptemp;
	cout << "\nEnter the number of cylinders: ";
	inStream >> Itemp;
	cout << "\nEnter the load capacitiy(in tons): ";
	inStream >> truckObject.loadCapacitiy;
	cout << "\nEnter the towing capacitiy(in pounds): ";
	inStream >> truckObject.towingCapacitiy;
	truckObject.setManufacture(Stemp);
	truckObject.setOwner(Ptemp);
	truckObject.setNumOfCylinder(Itemp);
	return inStream;
}

ostream & operator<<(ostream & outStream, const Truck & truckObject)
{
	outStream << "\n\n======================================";
	outStream << "\nThe load capacitiy: ";
	outStream << truckObject.loadCapacitiy;
	outStream << "\nThe towing capacitiy: ";
	outStream << truckObject.towingCapacitiy;
	outStream << "\nThe name of the manufacturer: ";
	outStream << truckObject.getManufacture();
	outStream << "\nThe name of the owner: ";
	outStream << truckObject.getOwner();
	outStream << "\nThe number of cylinders: ";
	outStream << truckObject.getNumOfCylinder();
	return outStream;
}
#endif // !TRUCK_H