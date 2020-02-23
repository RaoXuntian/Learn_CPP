#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	string word;
	std::vector<string> text;
	cout << "Input string (Enter ctrl+D to stop)" << endl;
	while (cin >> word) {
		text.push_back(word);
	}
	sort(text.begin(), text.end());

	for (int ix = 0; ix < text.size(); ix++) {
		cout << text[ix] << " ";
	}
	cout << endl;
	return 0;
}