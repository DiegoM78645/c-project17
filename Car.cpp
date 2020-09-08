#ifndef CAR_H
#include "Car.h"

Car::Car():Vehicle(), numOfDoors(2)
{
}

Car::Car(string newManufacturer, Person newowner, int newNumOfCylinder, int newNumOfDoors) : Vehicle(newManufacturer, newowner, newNumOfCylinder)
{
	switch (newNumOfDoors)
	{
	case 2: numOfDoors = newNumOfDoors; break;
	case 4: numOfDoors = newNumOfDoors; break;
	default: numOfDoors = 2; break;
	}
}

void Car::setNumOfDoor(const int newNumOfDoors)
{
	switch (newNumOfDoors)
	{
	case 2: numOfDoors = newNumOfDoors; break;
	case 4: numOfDoors = newNumOfDoors; break;
	default: numOfDoors = 2; break;
	}
}

int Car::getNumOfDoor() const
{
	return numOfDoors;
}


Car & Car::operator=(const Car & rtSide)
{
	Vehicle:: operator =(rtSide);
	this->numOfDoors = rtSide.numOfDoors;
	return *this;
}

istream & operator>>(istream & inStream, Car & carObject)
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
	cout << "\nEnter the number of doors: ";
	inStream >> carObject.numOfDoors;
	carObject.setManufacture(Stemp);
	carObject.setOwner(Ptemp);
	carObject.setNumOfCylinder(Itemp);
	return inStream;
}

ostream & operator<<(ostream & outStream, const Car & carObject)
{
	outStream << "\n\n======================================";
	outStream << "\nThe number of doors: ";
	outStream << carObject.numOfDoors;
	outStream << "\nThe name of the manufacturer: ";
	outStream << carObject.getManufacture();
	outStream << "\nThe name of the owner: ";
	outStream << carObject.getOwner();
	outStream << "\nThe number of cylinders: ";
	outStream << carObject.getNumOfCylinder();
	return outStream;
}
#endif // !CAR_H