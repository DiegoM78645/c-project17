#ifndef HOURLYEMPLOYEE_H

#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee() : Employee(), wageRate(0), hours(0)
{}
HourlyEmployee::HourlyEmployee(string theName, string theSSN, double theWageRate, double theHours) : Employee(theName, theSSN), wageRate(theWageRate), hours(theHours)
{}

double HourlyEmployee::getRate() const
{
	return wageRate;
}

void HourlyEmployee::setRate(const double theWageRate)
{
	if (theWageRate > 0)
		wageRate = theWageRate;
	else
		wageRate = 0;
}

double HourlyEmployee::getHours() const
{
	return hours;
}

void HourlyEmployee::setHours(const double theHours)
{
	hours = theHours;
}

void HourlyEmployee::printCheck()
{
	setNetPay(hours * wageRate);
	cout << "\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n";
	cout << "Pay to the order of " << getName() << "\n";
	cout << "The sum of " << getNetPay() << " Dollars\n";
	cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _";
	cout << "\nCheck stub: NOT NEGOTIABLE\n";
	cout << "Employee SSN: " << getSSN() << "\n";
	cout << "Hours worked: " << hours << "\n";
	cout << "Rate: " << wageRate << "\n";
	cout << "Pay: " << getNetPay() << "\n";
	cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n";
}
#endif // !HOURLYEMPLOYEE_H