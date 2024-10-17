/*
Public members can be accessed from anywhere 
in the program, including outside the class.
These members are directly available to the 
code that uses the class.
*/


#include <iostream>
using namespace std;

class Vehicle {
public:
	// public: can be accessed outside the class
	string color;
	string brand;

public:
	void displayBrand() {
		cout << "Brand :" << brand << endl;
	}

	void displayColor() {
		cout << "Color :" << color << endl;
	}
};

int main() {
	Vehicle car;

	// Direct access as 'brand' & 'color' is public
	car.brand = "Toyota";
	car.color = "white";

	//Accessing a public method
	car.displayBrand();
	car.displayColor();

	return 0;
}