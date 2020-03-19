#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
	string s;
	cout << "input a string: ";
	cin >> s;
	cout << s << endl;
	string ss(s.rbegin(), s.rend());
	cout << ss << endl;
	string a = "abcdef", b = "defgh";
	cout << a + b << endl;
	//cout << a - b << endl;

	cout << "input your QQ: " ;
	char qq[11];
	cin >> qq;
	cout << qq << endl;
	ss += ": ";
	int sum = 0;
	for (int i =0; qq[i] != '\0'; i++) {
		ss += qq[i];
		sum += qq[i] - '0';
	}
	cout << sum << endl;
	cout << ss << endl;

	int num1, num2;
	cout << "input two INT number: ";
	cin >> num1 >> num2;
	string com = to_string(num1) + to_string(num2);
	cout << com << endl;
	int tmpI = stoi(com);
	cout << --tmpI <<endl;
	return 0;
}