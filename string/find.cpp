#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string s="hello,wechat.";
	string sub="we";
	auto it=s.find(sub);
	cout << it << endl;
	it=s.find("world");
	cout << it << endl;
	cout << boolalpha << (it==(string::npos)) << std::endl;

	char flag[]="h";
	int position=0, i=1;
	while ((position=s.find(flag, position))!=-1) {
		cout << "position " << i << ": " << position << endl;
		++position;
		++i;
	}
	return 0;
}