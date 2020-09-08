#include "Billing.h"
Billing::Billing()
{
	bill = 0.0;
}

Billing::Billing(string PatientName, Doctor obj, double total): Patient(PatientName, obj)
{
	
	bill = total;
}
Billing::Billing(const Billing & billObj):Patient(billObj)
{
	bill = billObj.bill;
}
void Billing::setBill(double total)
{
	if (total > 0)
		bill = total;
}

double Billing::getBill()
{
	return bill;
}

Billing& Billing::operator=(const Billing& rtside)
{
	Patient:: operator=(rtside);
	bill = rtside.bill;
	return *this;
}

void Billing::printBill()
{
	Patient:: printPatient();
	cout << "============="
		<< "\nTotal: $ " << bill << "\n";
}
