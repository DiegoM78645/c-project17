/*Diego Mateo
4/24/19
cmpr121*/

#include <iostream>
#include <string>
#include <cstdlib>

#include "Employee.h"
#include "HourlyEmployee.h"
#include "AdministrativeEmployee.h"
#include "TemporaryEmployee.h"

#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

#include "Truck.h"

#include "SportsCar.h"

#include "Patient.h"
#include "Doctor.h"
#include "Billing.h"

using namespace std;

void Practice_Program2();
void Practice_Program3();
void Program_Project3();
void Program_Project4();

int main()
{
	while (true)
	{
		system("cls");
		cout << "\n\tChapter 17\n";
		cout << "==============================\n";
		cout << " 1: Practice Program2\n";
		cout << " 2: Practice Program3\n";
		cout << " 3: Programming Project3\n";
		cout << " 4: Programming Project4\n";
		cout << "==============================\n";
		cout << " option: ";
		char option[80];
		cin.getline(option, 80, '\n');

		cout << "\n";

		switch (atoi(option))
		{
		case 1: Practice_Program2(); break;
		case 2: Practice_Program3(); break;
		case 3: Program_Project3(); break;
		case 4: Program_Project4(); break;
		default: exit(0);
		}
		cout << "\n";
		system("pause");
		cin.clear();
	}
	return 0;
}
//=========================================================================================================================================

void Practice_Program2()
{
	Employee base;
	base.printCheck();
	cout << "\n";
	TemporaryEmployee Andrew("Andrew", "123-45-6789", 12, 13, "5-1-2019", "5-2-2019");
	//Andrew.empSSloyee::printCheck();
	Andrew.printCheck();
	cout << "\n";
	AdministrativeEmployee Diego("Diego", "789-45-6132", 200);
	Diego.printCheck();
	cout << "\n";
	HourlyEmployee temp("Arturo", "456-12-7897", 13, 80);
	temp.printCheck();
}

//=========================================================================================================================================

void Practice_Program3()
{
	Circle c(5);
	cout << c.getName() << "\n";
	cout << "The Perimeter is " << c.getPerimeter() << "\n";
	cout << "The Area is " << c.getArea() << "\n";
	cout << "The Volume is " << c.getVolume() << "\n\n";

	Rectangle r(63.5, 12.7);
	cout << r.getName() << "\n";
	cout << "The Perimeter is " << r.getPerimeter() << "\n";
	cout << "The Area is\ntest " << r.getArea() << "\n\n";
}

//=========================================================================================================================================

void Program_Project3()
{
	Person test;
	Person test1("Diego");
	test = test1;

	cout <<"cout test1: "<< test1 << "\n\ntest = test1: " << test << "\n";
	
	test.setName("jeff");
	cout << "\n\ntest.getName/test.setName: " << test.getName();

	cout << "\n\ncin/cout test: ";
	cout << "\nEnter a name: ";
	cin >> test;
	cout << "\n\ncin test: " << test ;


	cout << "\n\nvehicle test: ";
	Vehicle Camaro("Chevy", test, -4);
	cout << Camaro;
	cout << "\n\nno argument constructor vehicle test: ";
	Vehicle simi;
	cout << "\n\nvehicle = test: ";
	simi = Camaro;
	cout << simi;
	
	cout << "\n\nvehicle set/get test: ";

	simi.setManufacture("toyota");
	simi.setNumOfCylinder(6);
	simi.setOwner(test);
	cout<<"\n\n===========================================" 
		<<"\nThe name of the Manufacture is: " << simi.getManufacture()
		<<"\nThe number of cylinder is: " <<  simi.getNumOfCylinder()
		<<"\nThe name of the owner is: " << simi.getOwner();


	cout << "\n\nvehicle cin/cout test: ";
	cin >> Camaro;
	cout << Camaro;


	cout << "\n\ntruck test: ";
	Truck Tacoma("Toyota", test, 40,10,50);
	
	cout <<  Tacoma;
	cout << "\n\ntruck no argument constructor test: ";
	Truck Canyon;
	cout << Canyon;
	
	cout << "\n\ntruck cin/cout test: ";
	cin >> Canyon;
	cout << Canyon;

	cout << "\n\ntruck = test: ";
	Tacoma = Canyon;
	cout << Tacoma;


	cout << "\n\ntruck set/get test: ";
	Tacoma.setManufacture("Chevy");
	Tacoma.setNumOfCylinder(8);
	Tacoma.setOwner(test1);
	Tacoma.setTowing(25);
	Tacoma.setload(23.6);

	cout << "\n\n==========================================="
		<< "\nThe name of the manufacture is: " << Tacoma.getManufacture()
		<< "\nThe number of cylinder is: " << Tacoma.getNumOfCylinder()
		<< "\nThe name of the owner is: " << Tacoma.getOwner()
		<< "\nThe load capacity in tons is: " << Tacoma.getload()
		<< "\nThe towing capacity in pounds is: " << Tacoma.getTowing();

	Car car1, car2("Tesla", test1, 6, 6);
	cout << "\n\ncar test: ";
	cout << "\n" << car2 << "\n\ncar no argument constructor test" << car1 ;

	cout << "\n\ncar = test: ";
	car1 = car2;
	cout << "\n" << car1;

	cout << "\n\ncar set/get test: ";
	car1.setManufacture("");
	car1.setOwner(test1);
	car1.setNumOfCylinder(14);
	car1.setNumOfDoor(4);

	cout << "\n\n======================================";
	cout << "\nThe number of doors: ";
	cout << car1.getNumOfDoor();
	cout << "\nThe name of the manufacturer: ";
	cout << car1.getManufacture();
	cout << "\nThe name of the owner: ";
	cout << car1.getOwner();
	cout << "\nThe number of cylinders: ";
	cout << car1.getNumOfCylinder();

	cout << "\n\ncar cin/cout test: ";
	cin >> car2;
	cout << car2;

	SportsCar sportcar1, sportcar2("Tesla", test1, 6, 6, 150);
	cout << "\n\nsportcar test: ";
	cout << "\n" << sportcar2 << "\n\nsportcar no argument constructor test" << sportcar1;

	cout << "\n\nsportcar = test: ";
	sportcar1 = sportcar2;
	cout << "\n" << sportcar1;

	cout << "\n\nsportcar set/get test: ";
	sportcar1.setManufacture("");
	sportcar1.setOwner(test1);
	sportcar1.setNumOfCylinder(14);
	sportcar1.setTopSpeed(200);

	cout << "\n\n======================================";
	cout << "\nThe number of doors: ";
	cout << sportcar1.getNumOfDoor();
	cout << "\nThe name of the manufacturer: ";
	cout << sportcar1.getManufacture();
	cout << "\nThe name of the owner: ";
	cout << sportcar1.getOwner();
	cout << "\nThe number of cylinders: ";
	cout << sportcar1.getNumOfCylinder();
	cout << "\nThe top speed is: ";
	cout << sportcar1.getTopSpeed();

	cout << "\n\nsportcar cin/cout test: ";
	cin >> sportcar2;
	cout << sportcar2;

	cout << "\n";
	cin.ignore(99, '\n');
}

//=========================================================================================================================================

void Program_Project4()
{

	Doctor doc1;
	Doctor doc2("Oscar", "Ears");
	doc2.printDoctor();
	doc1 = doc2;
	doc1.printDoctor();
	doc2.setDoctor("Enrquie");
	doc2.setSpecialization("Eyes");
	doc2.printDoctor();


	Patient p1("Diego", doc2);
	p1.printPatient();
	
	Patient p2;
	p2 = p1;
	p2.printPatient();
	p2.setPatient("Andrew");
	p2.setDoctor("Lauren");
	p2.setSpecialization("Eyes");
	p2.printPatient();

	Billing Diego("Diego", doc1, 46513);
	Diego.printBill();
	Billing Andrew;
	Andrew.setPatient("Eric");
	Andrew.setDoctor("Arturo");
	Andrew.setSpecialization("Throat");
	Andrew.setBill(123456.54);
	Andrew.printBill();
}
