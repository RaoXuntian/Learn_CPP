#include <iostream>
using namespace std;

extern int tom;
static int dick = 10;
int harry = 200;

void remote_access()
{
	cout << "remote_access() reports the following address:\n";
	cout << &tom << " = &tom, " << &dick << " = &dick, ";
	cout << &harry << " = &harry\n";
}