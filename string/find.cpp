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
	cout << boolalpha << (it==(string::npos)) << std::endl;
	return 0;
}