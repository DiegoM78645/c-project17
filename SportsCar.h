#ifndef SPORTSCAR_H
#define SPORTSCAR_H

#include "Car.h"

class SportsCar: public Car
{
private:
	int topSpeed;
public:
	SportsCar();
	SportsCar(string newManufacturer, Person newName, int newNum, int newNumOfDoors, int newTopSpeed);
	void setTopSpeed(const int newNum);
	int getTopSpeed() const;
	SportsCar& operator=(const SportsCar & rtSide);
	friend  istream& operator >>(istream& inStream, SportsCar& vehicleObject);
	friend ostream& operator <<(ostream& outStream, const SportsCar& vehicleObject);
};
#endif // !SPORTSCAR_H