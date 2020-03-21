#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
	unsigned u = 10, u2 = 42;
	cout << u2 - u << endl;
	cout << u - u2 << endl;

	int i = 10, i2 = 42;
	cout << i2 - i << endl;
	cout << i - i2 << endl;

	cout << i - u << endl;
	cout << u - i << endl;

	//int j = 3.14;
	//double d = j;
	//cout << j << endl;
	//cout << d << endl;
	//extern ex = 0;
	string global_str;
	int global_int;
	cout << global_str << "*" << global_int << endl;
	{
		int local_int;
		string local_str;
		cout << local_str << "*" << local_int << endl;
	}

	int _;
	//int catch-22;  //illegal
	//int 1_or_2 = 1;  //illegal
	double Double = 3.14;
	return 0;
}