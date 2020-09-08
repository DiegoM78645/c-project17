#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include "Employee.h"

class HourlyEmployee : public Employee
{
private:
	double wageRate;
	double hours;
public:
	HourlyEmployee();
	HourlyEmployee(string theName, string theSSN, double theWageRate, double theHours);
	double getRate() const;
	void setRate(const double theWageRate);
	double getHours() const;
	void setHours(const double theHours);
	void printCheck();
};

#endif // !HOURLYEMPLOYEE_H