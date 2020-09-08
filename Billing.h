
#ifndef BILLING_H
#define BILLING_H
#include "Patient.h"
class Billing: public Patient
{
private:
	double bill;
public:
	Billing();
	Billing(string PatientName, Doctor obj, double total);
	Billing(const Billing& billObj);
	void setBill(double total);
	double getBill();
	Billing& operator=(const Billing& rtside);
	void printBill();
};
#endif