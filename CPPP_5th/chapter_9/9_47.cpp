#include <iostream>
#include <string>
using namespace std;

void find_char (string &s, const string &chars) {
	cout << "在" << s << "中查找" << chars << "中的字符" << endl;
	int pos=0;
	while ((pos=s.find_first_of(chars, pos)) != -1) {
		cout << "pos:" << pos << ", char:" << s[pos] << endl;
		++pos;
	}
}

int main(int argc, char const *argv[])
{
	string s="gvjbhkn5768gvb87";
	cout << "查找所有的数字" << endl;
	find_char(s, "0123456789");

	return 0;
}