//Brandon Mohamed
//11-27-20
//1202.501
//Inheritance, Polymorphism, and Virtual Functions


#include <string>
#include "vehicle.h"

using namespace std;

#ifndef car_h
#define car_h

class Car : public vehicle
{
	private:
		int numOfDoors;
	

	public:

		Car();

		Car(int, string, int);

		void setnumOfDoors(int);

		int getnumOfDoors();

		void displayinfo();
};

#endif // !car_h

