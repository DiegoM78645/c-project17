#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
	string name;
	string ssn;
	double netpay;

public:
	Employee();
	Employee(string theName, string theSSn);
	string getName() const;
	string getSSN() const;
	double getNetPay() const;
	void setName(const string newName);
	void setSSN(const string NewSSN);
	void setNetPay(const double newNetPay);
	void printCheck() const;
};

#endif // !EMPLOYEE_H