#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int donuts = 6;
	double cups = 4.5;

	cout << "donuts valus = " << donuts;
	cout << " and donuts address = " << &donuts << endl;

	cout << "cups value = " << cups;
	cout << " and cups address = " << &cups << endl;
	return 0;
}