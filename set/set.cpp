#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int ia[10] = {1, 3, 5, 8, 9, 1, 2, 3, 9, 6};
	std::vector<int> v(ia, ia+10);
	set<int> iset(v.begin(), v.end());

	cout << "vec: ";
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	cout << "set: ";
	for (set<int>::iterator it = iset.begin(); it != iset.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	return 0;
}