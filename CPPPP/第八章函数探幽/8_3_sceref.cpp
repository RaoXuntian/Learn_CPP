#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int rats = 101;
	int & rodents = rats;

	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;

	cout << "rats address = " << &rats;
	cout << ", rodents address = " << &rodents << endl;

	int bunnies = 50;
	rodents = bunnies;
	cout << "bunnies = " << bunnies;
	cout << ", rats = " << rats;
	cout << ", rodents = " << rodents << endl;

	cout << "rats address = " << &rats;
	cout << ", bunnies address = " << &bunnies;
	cout << ", \nrodents address = " << &rodents << endl;
	return 0;
}