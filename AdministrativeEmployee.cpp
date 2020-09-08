#ifndef ADMINISTRATIVEEMPLOYEE_H

#include "AdministrativeEmployee.h"

AdministrativeEmployee::AdministrativeEmployee() : Employee(), salary(0)
{}
AdministrativeEmployee::AdministrativeEmployee(string theName, string theSSN, double theWeeklySalary) : Employee(theName, theSSN), salary(theWeeklySalary)
{}
double AdministrativeEmployee::getSalary() const
{
	return salary;
}
void AdministrativeEmployee::setSalary(double newSalary)
{
	salary = newSalary;
}

void AdministrativeEmployee::printCheck()
{
	setNetPay(salary);
	cout << "\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n";
	cout << "Pay to the order of " << getName()<< "\n";
	cout << "The sum of " << getNetPay() << " Dollars\n";
	cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n";
	cout << "Check Stub NOT NEGOTIABLE \n";
	cout << "Employee Number: " << getSSN()<< "\n";
	cout << "Salaried Employee. Regular Pay: " << salary<< "\n";
	cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n";
}

#endif // !ADMINISTRATIVEEMPLOYEE_H