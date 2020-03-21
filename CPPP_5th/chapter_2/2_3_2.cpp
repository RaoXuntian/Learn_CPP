#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[])
{
	int *p1 = nullptr; //空指针
	int *p2 = NULL; //空指针
	int *p3 = 0; //空指针
	cout << "p1 = " << p1 << endl;
	cout << "p2 = " << p2 << endl;
	cout << "p3 = " << p2 << endl;

	int i = 0;
	int *p = &i;
	cout << "p = " << p 
		<< "\n*p = " << *p << endl;
	*p = 2;
	cout << "i = " << i << endl;
	return 0;
}