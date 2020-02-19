#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int higgens = 5;
	int *pt = &higgens;

	cout << "Valus of higgens = " << higgens
		<< "; Address of higgens = " << &higgens << endl;
	cout << "Valus of *pt = " << *pt
		<< "; Address of pt" << pt << endl;
	return 0;
}