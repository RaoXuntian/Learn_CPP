#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int *p = new int();
	int res = 0;
	cout << "Start inputing !!! (enter ctrl + D to end!)" << endl;
	while (cin >> (*p)) {
		res += *p;
		p++;
	}
	cout << "The sum is " <<res << endl;
	return 0;
}