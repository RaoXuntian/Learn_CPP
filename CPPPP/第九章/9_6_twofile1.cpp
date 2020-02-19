#include <iostream>
#include "9_7_twofile2.cpp"
using namespace std;

int tom = 3;
int dick = 30;
static int harry = 300;

void remote_access();

int main(int argc, char const *argv[])
{
	cout << "main() reports the following address:\n";
	cout << &tom << " = &tom, " << &dick << " = &dick, ";
	cout << &harry << " = &harry\n";
	remote_access();
	return 0;
}