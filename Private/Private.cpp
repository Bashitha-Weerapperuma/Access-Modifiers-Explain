#include "Private.h"
#include <iostream>
using namespace std;

class Animal {
private:
	//private : can not be accessed outside the class
	int legs;


public:
	//create public method to access for others
	void setLegs(int n) {
		//can access private member inside the class
		legs = n;
	}

	void showLegs() {
		cout << "Legs Number :" << legs << endl;
	}
};







