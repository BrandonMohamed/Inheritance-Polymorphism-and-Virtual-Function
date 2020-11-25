//Brandon Mohamed
//11-27-20
//1202.501
//Inheritance, Polymorphism, and Virtual Functions

#include <iostream>
#include "truck.h"


truck::truck() 
{
    towingCapacity = 0;
}

truck::truck(int newTowingCapacity, string newManufacturer, int newYearBuilt) : vehicle(newManufacturer, newYearBuilt) 
{
    towingCapacity = newTowingCapacity;
}

void truck::setTowingCapacity(int newTowingCapacity) 
{
    towingCapacity = newTowingCapacity;
}

int truck::getTowingCapacity() 
{
    return towingCapacity;
}


void truck::displayInfo()
{
    vehicle::displayInfo();

    cout << endl << "Towing Capacity: " << towingCapacity;
}