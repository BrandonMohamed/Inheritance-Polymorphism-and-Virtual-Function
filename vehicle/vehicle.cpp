//Brandon Mohamed
//11-27-20
//1202.501
//Inheritance, Polymorphism, and Virtual Functions

#include <iostream>
#include "vehicle.h"

//constructor
vehicle::vehicle()
{
	manufacturer = "" ;

	yearBuilt = 0;
}

vehicle::vehicle(string newManufacturer, int newYearBuilt)
{
	manufacturer = newManufacturer;

	yearBuilt = newYearBuilt;
}

void vehicle::setManufacturer(string vehicleManufacturer)
{
	manufacturer = vehicleManufacturer;
}

void vehicle::setYearBuilt(int vehicleYearBuilt)
{
	yearBuilt = vehicleYearBuilt;
}

string vehicle::getManufacturer()
{
	return manufacturer;
}

int vehicle :: getYearBuilt()
{
	return yearBuilt;
}

void vehicle::displayInfo()
{
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year Built: " << yearBuilt;
}
