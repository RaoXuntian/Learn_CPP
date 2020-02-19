#include <iostream>

using namespace std;

int main()
{
	//const char* s = "Hello world";
	char s[] = "hello wolrd";
	cout << s << endl;

	s[0] = 'B';

	cout << s << endl;

	return 0;
}
