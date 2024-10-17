#include "Private.cpp"
int main() {
	Animal cat;

	//accessing private data through public method
	cat.setLegs(4);

	cat.showLegs();
	return 0;
}