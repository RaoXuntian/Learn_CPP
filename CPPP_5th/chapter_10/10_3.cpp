#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> ivec={1,2,3,4,5,6,7,8,9};
	vector<int> ivec1={1,2,3,4,5,6,7,8,9,0};
	int a=accumulate(ivec.begin(), ivec.end(), 0);
	cout << a << endl;
	vector<string> svec={"hello", "world", "HUST"};
	string s=accumulate(svec.begin(), svec.end(), string("123"));
	//string s=accumulate(svec.begin(), svec.end(), ""); ERROR!!!
	// "" 传递的保存和的对象的类型将是const char* 没有+运算符
	cout << s << endl;
	cout << boolalpha << equal(ivec.begin(), ivec.end(), ivec1.begin()) << endl;
	return 0;
}