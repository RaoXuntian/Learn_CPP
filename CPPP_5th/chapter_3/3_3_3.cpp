#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int main(int argc, char const *argv[])
{
	/*vector<string> text;
	string word;
	while (cin >> word) {
		for (auto &x: word) x = toupper(x);
		text.push_back(word);
	}
	for (auto x: text) {
		cout << x << endl;
	}*/
	cout << "--------------------------" << endl;
	vector<int> nums;
	int num;
	while (cin >> num) {
		nums.push_back(num);
	}
	int le = -1, ri = nums.size();
	while (++le <= --ri) {
		if (le == ri) {
			cout << nums[le] << endl;
			continue;
		}
		cout << nums[le] << "+" << nums[ri] << " = " << nums[le] + nums[ri] << endl;
	}
	return 0;
}