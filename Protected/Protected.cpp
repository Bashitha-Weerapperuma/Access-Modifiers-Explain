#include "Protected.h"

#include <iostream>
using namespace std;

class Amimal {

protected:
	string type;

public:
	void setType(string t) {
		type = t;
	}
};

class Dog : public Amimal {
public:
	void showType() {

		//can access "type" as it is protected
		cout << "Animal Type :" << type << endl;

	}
};

int main() {
	Dog dog;

	dog.setType("Wal Balla");

	dog.showType();

	return 0;
}