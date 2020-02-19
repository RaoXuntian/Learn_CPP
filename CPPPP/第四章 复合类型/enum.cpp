#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	enum spectrum 
	{
		red,
		orange,
		yellow,
		green,
		blue,
		violet,
		indigo,
		ultraviolet
	};

	enum bits
	{
		one = 1,
		two = 2,
		four = 4,
		eight = 8
	};

	spectrum band;
	band = blue;
	cout << "blue: " << blue << endl;
	bits n = four;
	bits myflag;
	myflag = bits(6);
	cout << n << endl;
	cout << "myflag: " << myflag << endl;
	return 0;
}