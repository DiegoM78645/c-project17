#ifndef DOCTOR_H
#define DOCTOR_H

#include <iostream>
#include <string>
using namespace std;

class Doctor
{
private:
	string docName;
	string specialization;
public:
	Doctor();
	Doctor(string dname, string dspeciality);
	Doctor(const Doctor& docobj);
	void setDoctor(string newName);
	string getDoctor();
	void setSpecialization(string newSpecialization);
	string getSpecialization();
	Doctor& operator=(const Doctor& rtside);
	void printDoctor();
};
#endif