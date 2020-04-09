#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> v={1,2,3,4,5};
	auto ip=v.begin();
	while (ip!=v.end()) {
		cout << *ip++ << endl;
	}
	string s="word";
	string p1=s+(s[s.size()-1]=='s'?"":"s");
	cout << p1 << endl;

	int x[10]; 
	int *p=x;
	cout << sizeof(x)/sizeof(*x) << endl;
	cout << sizeof(p)/sizeof(*p) << endl;

	float i=10, j=3;
	double z=i/j;
	cout << z << endl;
	return 0;
}