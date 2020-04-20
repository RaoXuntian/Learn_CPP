//用vector保存不重复的单词
#include <vector>
#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

struct myComp{
	bool operator() (const int &a,const int &b) const{
		return !!(a>b);
	}
	//https://stackoverflow.com/questions/51235355/comparison-object-being-invocable-as-const
};

int main(int argc, char const *argv[])
{
	string input;
	cin >> input;
	vector<char> unique_char;
	set<char> s;
	set<char, myComp> ss;
	unordered_set<char> us;
	for (auto x:input) {
		s.insert(x);
		us.insert(x);
		ss.insert(x);
		if (find(unique_char.begin(), unique_char.end(), x) == unique_char.end()) {
			unique_char.push_back(x);
		}
	}
	//set<char, myComp> ss(s.begin(), s.end());
	cout << "vector: \t";
	for (auto x: unique_char) {
		cout << x << " ";
	}
	cout << endl;

	cout << "set: \t\t";
	for (auto x: s) {
		cout << x << " ";
	}
	cout << endl;

	cout << "reverse set: \t";
	for (auto x: ss) {
		cout << x << " ";
	}
	cout << endl;

	cout << "unordered_set: \t";
	for (auto x: us) {
		cout << x << " ";
	}
	cout << endl;
	return 0;
}