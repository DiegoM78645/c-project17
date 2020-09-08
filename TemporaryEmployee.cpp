#ifndef TEMPORARYEMPLOYEE_H

#include "TemporaryEmployee.h"

TemporaryEmployee::TemporaryEmployee() : HourlyEmployee(), startDate("N/A"), endDate("N/A")
{}
TemporaryEmployee::TemporaryEmployee(string newName, string newSSN, double newWage, double newHours, string sDate, string eDay) : HourlyEmployee(newName, newSSN, newWage, newHours), startDate(sDate), endDate(eDay)
{}

void TemporaryEmployee::printCheck()
{
	HourlyEmployee::printCheck();
	cout << "From " << startDate << " to  " << endDate << "\n";
	cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n";
}
#endif // !TEMPORARYEMPLOYEE_H