#include <iostream>
using namespace std;

int i = 10;

int main(int argc, char const *argv[])
{
	int i = 100;//新建局部变量i, 覆盖了全局变量i
	int j = i;
	cout << "j = " << j << endl;
	cout << "i = " << i << endl;
	cout << "::i = " << ::i << endl;//显式地访问全局变量i

	int sum = 0;
	for (int i = 0; i != 10; ++i) sum += i;
	cout << "i = " << i << ", sum = " << sum << endl;
	return 0;
}