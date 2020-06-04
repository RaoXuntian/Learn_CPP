#include <iostream>

using namespace std;

int main(){
	const int bufSize = 512; 
	int const bufSize1 = 1024; 
	//bufSize = 1024;
	int a = 64;
	const int ci = a;
	const int cis = sizeof(a);

	cout << ci << " " << cis << endl;
	//const int ci = 54;

	int age = 17;
	const int* pt = &age;

	cout << *pt << endl;
	//(*pt)++;

	int sloth = 3;
	int * const finger = &sloth;
	//finger = &age;
	*finger = 5;
	/*
	int* ip;
	const int* cip = &ci;

	*ip = 54;
	// ip = &ci;
	// *cip = 54;

	cout << "ip->" << ip
		<< "  cip->" << cip << endl;
	*/
	return 0;
}
