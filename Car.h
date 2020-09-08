#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car:public Vehicle
{
private:
	int numOfDoors;
public:
	Car();
	Car(string newManufacturer, Person newName, int newNum, int newNumOfDoors);
	void setNumOfDoor(const int newNum);
	int getNumOfDoor() const;
	Car& operator=(const Car & rtSide);
	friend istream& operator >>(istream& inStream, Car& vehicleObject);
	friend ostream& operator <<(ostream& outStream, const Car& vehicleObject);
};
#endif // !CAR_H