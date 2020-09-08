#ifndef TEMPORARYEMPLOYEE_H
#define TEMPORARYEMPLOYEE_H

#include "HourlyEmployee.h"

using namespace std;

class TemporaryEmployee : public HourlyEmployee
{
private:
	string startDate;
	string endDate;
public:
	TemporaryEmployee();
	TemporaryEmployee(string newName, string newSSN, double newWage, double newHours, string sDate, string eDay);
	void printCheck();
};


#endif // !TEMPORARYEMPLOYEE_H