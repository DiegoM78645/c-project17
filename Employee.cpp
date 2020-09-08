#ifndef EMPLOYEE_H

#include "Employee.h"

Employee::Employee()
{
	name = "No name yet";
	ssn = "No number yet";
	netpay = 0;
}

Employee::Employee(string theName, string theSSN)
{
	name = theName;
	ssn = theSSN;
}

string Employee::getName() const
{
	return name;
}

string Employee::getSSN() const
{
	return ssn;
}

double Employee::getNetPay() const
{
	return netpay;
}

void Employee::setName(const string newName)
{
	name = newName;
}

void Employee::setSSN(const string NewSSN)
{
	ssn = NewSSN;
}


void Employee::setNetPay(const double newNetPay)
{
	netpay = newNetPay;
}

void Employee::printCheck() const
{
	cout << "\nERROR: print check function call fail because UNDIFFERETIATED EMPLOYEE.\n";
}
#endif // !EMPLOYEE_H