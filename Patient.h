#ifndef PATIENT_H
#define PATIENT_H
#include "Person.h"
#include "Doctor.h"
class Patient :public Person
{
private:
	Doctor doc;
	string name;
public:
	Patient();
	Patient(string PatientName, Doctor docName);
	Patient(const Patient& PatientName);
	string getPatient();
	void setPatient(string PatientName);
	string getDoctor();
	void setDoctor(string docName);
	string getSpecialization();
	void setSpecialization(string newSpecialization);
	Patient& operator=(const Patient& rtside);
	void printPatient();

};
#endif
