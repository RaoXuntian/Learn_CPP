#include <iostream>
#include <cstring>
using namespace std;

void readLine();

int main(int argc, char const *argv[])
{
	//readLine();	
	string s1, s2;
	cin >> s1 >> s2;
	string res;
	res = s1 > s2? s1:s2;
	cout << res << endl;

	string s, re;
	while (cin >> s) {
		re += s;
	}
	cout << endl << re << endl;
	return 0;
}

void readLine() {
	string line;
	int count = 0;
	cout << "Input:" << endl;
	//while (getline(cin, line)) {
	//	cout << "#" << ++count << "  " << line << endl;
	//}
	while (cin>>line) {
		cout << "#" << ++count << "  " << line << endl;
	}
}