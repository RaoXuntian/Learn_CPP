#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	double* p3 = new double [3];
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;
	cout << "p3[1] is " << p3[1] << endl;
	p3 = p3 + 1;
	cout << "now p3[0] is " << p3[0] << " and ";
	cout << "p3[1] is " << p3[1] << endl;
	p3 = p3 -1;
	cout << "sizeof(*p3) = " << sizeof(p3) << endl;
	cout << "sizeof(p3) = " << sizeof(p3) << endl;
	cout << "sizeof(p3[0]) = " << sizeof(p3[0]) << endl;
	delete [] p3;
	return 0;
}