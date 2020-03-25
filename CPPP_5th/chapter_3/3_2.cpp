#include <iostream>
#include <stdlib.h>
using namespace std;
void wait();
void compareString();
int main(int argc, char const *argv[])
{
	string s;
	cout << "Input s: ";
	cin >> s;
	cout << "s: " << s << endl;
	//cin.clear();
	//cin.ignore(100, '\n'); 
	wait();
	//compareString();

	string s1 = "hello", s2 = "world";
	string s3 = s1 + ", " + s2 + '\n';
	string s4 = s1 + ", ";
	//string s5 = "hello" + ", "; //illegal: 运算符(+)两侧至少要有一个是string类
	string s6 = s1 + ", " + "world";
	//string s7 = "hello" + ", " + s2; //illegal: 运算符(+)两侧至少要有一个是string类
	string s7 = "hello" + (", " + s2);
	return 0;
}

void compareString() {
	string s1, s2;
	cout << "Input s1 and s2: ";
	while (cin >> s1 >> s2) {
		cout << s1 << " < " << s2 << " is " << boolalpha << (s1 < s2) << endl;
		wait();
		cout << "Input s1 and s2 again: ";
	} 
	cout << "\nBye" << endl;
}

void wait() {
	cin.ignore(numeric_limits<std::streamsize>::max(), '\n'); 
	cout << "Input ENTER to continue...";
	getchar();
	cout << "--------------------" << endl;
	cin.ignore(numeric_limits<std::streamsize>::max(), '\n'); 
}