#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int ival = 1024;
	int &refVal = ival;

	refVal = 10;

	//int &r = 100;  //illegal:引用类型的初始值必须是个对象
	//r = 1;

	int i = 0, &r1 = i;
	double d = 0, &r2 = d;
	r2 = 3.1415926;
	r2 = r1; //r2 = 0;
	i = r2; // i = 0;
	r1 = d; // r1 = 0;
	cout << "i = " << i << endl;
	cout << "r1 = " << r1 << endl;
	cout << "d = " << d << endl;
	cout << "r2 = " << r2 << endl;

	{
		int i, &r1 = i;
		i = 5; r1 = 10;
		cout << "i = " << i
			<< "\nri = " << r1 << endl;
	}

	return 0;
}