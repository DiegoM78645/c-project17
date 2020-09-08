#include "Patient.h"

Patient::Patient() :Person()
{
}
Patient::Patient(string PatientName, Doctor obj)
{
	doc = obj;
	name = PatientName;
}
string  Patient::getPatient()
{
	return name;
}
void Patient::setPatient(string PatientName)
{
	name = PatientName;
}
string Patient::getDoctor()
{
	return doc.getDoctor();
}
void Patient::setDoctor(string docName)
{
	doc.setDoctor(docName);
}
string Patient::getSpecialization()
{
	return doc.getSpecialization();
}

void Patient::setSpecialization(string newSpecialization)
{
	doc.setSpecialization(newSpecialization);
}

Patient::Patient(const Patient& patobj) :Person(patobj)
{
	doc = patobj.doc;
}

Patient& Patient::operator=(const Patient& rtside)
{
	Person::operator=(rtside);
	doc = rtside.doc;
	return *this;
}

void Patient::printPatient()
{
	cout << "\nPatient Record:\n"
		<< "_____________\n\n"
		<< "Patient Name: "<< name
		<< "\nDoctor Name: " << doc.getDoctor() 
		<< "\nDesignation: " << doc.getSpecialization()
		<< "\n";
}
