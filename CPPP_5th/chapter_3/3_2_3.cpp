#include <iostream>
#include <cctype>
using namespace std;

int main(int argc, char const *argv[])
{
	string s(" Hello world!!! rxt.");
	int flag = 1;
	for (auto &c: s) {
		if (ispunct(c)) continue;
		if (isspace(c)) flag = 0;
		if (flag) c = toupper(c);
		cout << c;
	}
	cout << endl;
	//cout << s << endl;
	return 0;
}