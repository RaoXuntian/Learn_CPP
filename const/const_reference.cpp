#include <iostream>
#include <assert.h>

const int SIZE = 32;

double myarray[SIZE];
double& subscript(const int i) {
	return myarray[i];
}

int main() {
	for(int i = 0; i < SIZE; i++) {
		myarray[i] = i * 0.5;
	}
	double value = subscript(12);
	std::cout << "value = " << value << std::endl;
	std::cout << "myarray[3] = " << myarray[3] << std::endl;
	subscript(3) = 34.5;
	std::cout << "myarray[3] = " << myarray[3] << std::endl;

	return 0;
}