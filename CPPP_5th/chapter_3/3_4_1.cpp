#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[])
{
	/*
	vector<string> text;
	string word;
	while (cin >> word) {
		string::iterator it;
		for (it = word.begin(); it != word.end(); ++it) *it = toupper(*it);
		text.push_back(word);
	}
	for (auto x: text) {
		cout << x << endl;
	}
	*/
	vector<int> nums(10);
	for (auto it = nums.begin(); it != nums.end(); ++it ) {
		*it = rand() % 100;
		cout << *it << " ";
	}
	cout << endl;

	for (auto it = nums.begin(); it != nums.end(); ++it ) {
		*it += *it;
	}
	for (auto it = nums.begin(); it != nums.end(); ++it ) {
		cout << *it << " ";
	}
	cout << endl;
	return 0;
}