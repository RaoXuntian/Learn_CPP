#include <iostream>
#include <set>
#include <vector>
#include <unordered_set>
using namespace std;

struct myCmp {
	bool operator() (const int &a,const int &b) {
		return !!(a>b);
	}
};

int main(int argc, char const *argv[])
{
	int ia[12] = {10, -5 ,1, 3, 5, 8, 9, 1, 2, 3, 9, 6};
	std::vector<int> v(ia, ia+12);
	set<int> iset(v.begin(), v.end());
	set<int, myCmp> newiset(v.begin(), v.end());
	unordered_set<int> uiset(v.begin(), v.end());

	cout << "vec: \t";
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	cout << "set: \t";
	for (set<int>::iterator it = iset.begin(); it != iset.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;


	cout << "set: \t";
	for (set<int, myCmp>::iterator it = newiset.begin(); it != newiset.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	cout << "unrodered_set: \t";
	for (unordered_set<int>::iterator it = uiset.begin(); it != uiset.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	return 0;
}