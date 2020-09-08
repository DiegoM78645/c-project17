#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"

class Truck : public Vehicle
{
private:
	double loadCapacitiy;
	int towingCapacitiy;
public:
	Truck();
	Truck(string  newManufacturer, Person newowner, int newNum, double newLoad, int newTowing);
	int getTowing() const;
	void setTowing(const int newNum);
	double getload() const;
	void setload(const double newNum);
	Truck& operator=(const Truck & rtSide);
	friend istream& operator >>(istream& inStream, Truck& truckObject);
	friend ostream& operator <<(ostream& outStream, const Truck& truckObject);

};
#endif // !TRUCK_H