//Brandon Mohamed
//11-27-20
//1202.501
//Inheritance, Polymorphism, and Virtual Functions

#include <string>
#include "Vehicle.h"
using namespace std;

#ifndef truck_h
#define truck_h

class truck : public vehicle
{
private:
    int towingCapacity;

public:
    truck();

    truck(int, string, int);

    void setTowingCapacity(int);

    int getTowingCapacity();

    void displayInfo();
};

#endif // !truck_h