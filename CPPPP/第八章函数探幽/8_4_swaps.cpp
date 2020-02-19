#include<iostream>
using namespace std;

void swapr(int & a, int & b);
void swapp(int * p, int * q);
void swapv(int a, int b);

int main(int argc, char const *argv[])
{
	int wallet1 = 300;
	int wallet2 = 350;

	cout << "wallet1's address is " << &wallet1
		<< ", wallet2's address is" << &wallet2 << endl;

	cout << "wallet1 = $" << wallet1;
	cout << "\twallet2 = $" << wallet2 << endl;

	cout << "Using pointers to swap contents:\n";
	swapp(&wallet1, &wallet2);


	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;
	cout << "Trying to use passing by value: \n";
	swapr(wallet1, wallet2);

	
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	return 0;
}

void swapr(int & a, int & b)
{
	cout << "Before:\twallet1's address is " << &a
		<< ", wallet2's address is" << &b << endl;
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "After:\twallet1's address is " << &a
		<< ", wallet2's address is" << &b << endl;
}

void swapp(int * p, int * q)
{
	cout << "Before:\twallet1's address is " << p
		<< ", wallet2's address is" << q << endl;
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
	cout << "After:\twallet1's address is " << p
		<< ", wallet2's address is" << q << endl;
}

void swapv(int a, int b)
{
	cout << "Before:\twallet1's address is " << &a
		<< ", wallet2's address is" << &b << endl;
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "After:\twallet1's address is " << &a
		<< ", wallet2's address is" << &b << endl;
}