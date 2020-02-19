#include <iostream>
#include "9_1_coordin.h"
#include "9_3_file2.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
	rect rplace;
	polar pplace;

	cout << "Enter the x and y values: ";
	while (cin >> rplace.x >> rplace.y)
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Next two numbers(q to quit): ";
	}
	cout << "Bye!\n";
	return 0;
}