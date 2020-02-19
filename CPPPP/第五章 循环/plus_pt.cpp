#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	double arr[5] = {21.2, 32.5, 54.3, 66.6,89.4};
	double* pt = arr;

	cout << "pt = " << pt << endl;
	cout << "++pt = " << ++pt << endl;
	cout << "*pt = " << *pt << endl;
	cout << "*++pt = " << *++pt << endl;
	cout << "*pt = " << *pt << endl;
	cout << "++*pt = " << ++*pt << endl;
	cout << "*pt = " << *pt << endl;
	cout << "(*pt)++ = " << (*pt)++ << endl;
	cout << "*pt = " << *pt << endl;
	cout << "*pt++ = " << *pt++ << endl;
	cout << "*pt = " << *pt << endl;
	return 0;
}