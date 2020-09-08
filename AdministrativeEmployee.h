#ifndef ADMINISTRATIVEEMPLOYEE_H
#define ADMINISTRATIVEEMPLOYEE_H
#include "Employee.h"

class AdministrativeEmployee : public Employee
{
private:
	double salary;//weekly
public:
	AdministrativeEmployee();
	AdministrativeEmployee(string theName, string theSSN, double theWeeklySalary);
	double getSalary() const;
	void setSalary(double newSalary);
	void printCheck();
};

#endif // !ADMINISTRATIVEEMPLOYEE_H