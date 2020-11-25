//Brandon Mohamed
//11-27-20
//1202.501
//Inheritance, Polymorphism, and Virtual Functions

#include <iostream>
#include <string>
#include "vehicle.h"
#include "car.h"
#include "truck.h"

using namespace std;

int main() 
{
    string manufacturer;

    int yearBuilt, numOfDoors, towingCapacity;

    // user input vehicle info` 
    cout << "Vehicle Program" << endl;

    cout << endl << "Vehicle: ";

    cout << endl << "Enter the manufacturer: ";

    getline(cin, manufacturer);

    cout << endl << "Enter the year built: ";

    cin >> yearBuilt;

    // Store in vehicle class
    vehicle vehicle;

    vehicle.setManufacturer (manufacturer);

    vehicle.setYearBuilt (yearBuilt);

    // Display Info
    cout << endl << "Vehicle Information:  " << endl;

    vehicle.displayInfo();
    
    // user input Car info
    cout << endl << "Car: ";

    cout << endl << "Enter the manufacturer:  ";

    cin.ignore();

    getline(cin, manufacturer);

    cout << endl << "Enter the year built: ";

    cin >> yearBuilt;

    cout << endl << "Enter the number of doors: ";

    cin >> numOfDoors;

    // Store in vehicle class
    Car car;

    car.setManufacturer(manufacturer);

    car.setYearBuilt(yearBuilt);

    car.setnumOfDoors(numOfDoors);

    // Display Info
    cout << endl << "Car Information: "<<endl;

    car.displayInfo();

    // user input truck info
    cout << endl << "Truck: ";

    cout << endl << "Enter the manufacturer: ";

    cin.ignore();

    getline(cin, manufacturer);

    cout << endl << "Enter the year built: ";

    cin >> yearBuilt;

    cout << endl << "Enter the towing capacity: ";

    cin >> towingCapacity;

    // Store in vehicle class
    truck truck;

    truck.setManufacturer(manufacturer);

    truck.setYearBuilt(yearBuilt);

    truck.setTowingCapacity(towingCapacity);

    // Display Info
    cout << endl << "Truck Information: ";

    truck.displayInfo();

    cout << endl;

    return 0;
}