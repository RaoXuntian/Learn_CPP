#include <iostream>
#include <vector>
using namespace std;

void show (vector<int> v) {
	for (auto x:v) {
		cout << x << " ";
	}
	cout << endl;
}

int	main(int argc, char const *argv[])
{
	vector<int> v={1,2,3,4,5,6,7,8,9,10};
	vector<int>::iterator it;
	for (it=v.begin(); it!=v.end(); ++it) {
		if (*it&1) 
			it=v.erase(it);
	}
	show(v);
	remove(v.begin(), v.end(), 4);
	show(v);
	return 0;
}