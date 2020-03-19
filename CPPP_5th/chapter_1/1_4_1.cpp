#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int res = 0, num = 50;
	while(num <= 100) {
		res += num++;
	}
	cout << res << endl;

	num = 11;
	while (num--) {
		cout << num << " ";
	}
	cout << endl;

	cout << " Input two INT: " ;
	int a, b;
	cin >> a >> b;
	if (a > b) {
		swap(a, b);
	}
	a--;
	while (++a <= b) {
		cout << a << " ";
	}
	cout << endl;
	return 0;
}