//Brandon Mohamed
//11-27-20
//1202.501
//Inheritance, Polymorphism, and Virtual Functions

#include <iostream>
#include "car.h"


Car::Car()
{
	numOfDoors = 0;
}

 Car::Car(int newNumOfDoors, string newManufacturer, int newYearBuilt) : vehicle(newManufacturer, newYearBuilt)
{
	numOfDoors = newNumOfDoors;
}

void Car::setnumOfDoors(int newNumOfDoors)
{
	numOfDoors = newNumOfDoors;
}

int Car::getnumOfDoors()
{
	return numOfDoors;
}

void Car::displayinfo()
{
	vehicle::displayInfo();
	cout << "Number of doors: " << endl;
}