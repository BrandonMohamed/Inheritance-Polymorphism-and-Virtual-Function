//Brandon Mohamed
//11-27-20
//1202.501
//Inheritance, Polymorphism, and Virtual Functions

#include <iostream>
#include <string>
using namespace std;

#ifndef vehicle_h
#define vehicle_h

class vehicle
{
	private:
		string manufacturer;
	     
		int yearBuilt;


	public:
		vehicle();

		vehicle(string, int);

		void setManufacturer(string);

		void setYearBuilt(int);

		string getManufacturer();

		int getYearBuilt();

		void displayInfo();
};

#endif // !vehicle_h
