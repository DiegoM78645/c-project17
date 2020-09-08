#include "Doctor.h"

Doctor::Doctor() :docName("not yet defined "), specialization("not yet defined")
{
}
Doctor::Doctor(string newName, string newspecialization)
{
	docName = newName;
	specialization = newspecialization;
}
Doctor::Doctor(const Doctor& docobj)
{
	docName = docobj.docName;
	specialization = docobj.specialization;
}
string Doctor::getDoctor()
{
	return docName;
}
void Doctor::setSpecialization(string newSpecialization)
{
	specialization = newSpecialization;
}
string Doctor::getSpecialization()
{
	return specialization;
}

void Doctor::setDoctor(string newName)
{
	docName = newName;
}
Doctor& Doctor::operator=(const Doctor& rtside)
{
	this->docName = rtside.docName;
	this->specialization = rtside.specialization;
	return *this;
}

void Doctor::printDoctor()
{
	cout << "\nDoctor Record:\n"
		<< "_____________\n\n"
		<< "Doctor Name: " << docName
		<< "\nDesignation: " << specialization
		<< "\n";
}
