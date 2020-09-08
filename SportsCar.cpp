#include "SportsCar.h"



SportsCar::SportsCar():Car(), topSpeed(0)
{
}

SportsCar::SportsCar(string newManufacturer, Person newName, int newNum, int newNumOfDoors, int newTopSpeed) : Car(newManufacturer, newName, newNum, newNumOfDoors), topSpeed(newTopSpeed)
{
}

void SportsCar::setTopSpeed(const int newTopSpeed)
{
	if (newTopSpeed > 0)
		topSpeed = newTopSpeed;
	else
		topSpeed = 0;
}

int SportsCar::getTopSpeed() const
{
	return topSpeed;
}

SportsCar & SportsCar::operator=(const SportsCar & rtSide)
{
	Car:: operator =(rtSide);
	this->topSpeed = rtSide.topSpeed;
	return *this;
}

istream & operator>>(istream & inStream, SportsCar & SportsCarObject)
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
	cout << "\nEnter the top speed: ";
	inStream >> SportsCarObject.topSpeed;
	SportsCarObject.setManufacture(Stemp);
	SportsCarObject.setOwner(Ptemp);
	SportsCarObject.setNumOfCylinder(Itemp);
	return inStream;
}

ostream & operator<<(ostream & outStream, const SportsCar & SportsCarObject)
{
	outStream << "\n\n======================================";
	outStream << "\nThe number of doors: 2";
	outStream << "\nThe name of the manufacturer: ";
	outStream << SportsCarObject.getManufacture();
	outStream << "\nThe name of the owner: ";
	outStream << SportsCarObject.getOwner();
	outStream << "\nThe number of cylinders: ";
	outStream << SportsCarObject.getNumOfCylinder();
	outStream << "\nThe top speed is: ";
	outStream << SportsCarObject.topSpeed;
	return outStream;
}
