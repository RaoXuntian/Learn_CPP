#include <iostream>
#include <utility>
#include <algorithm>
#include <fstream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	ifstream in(argv[1]);
	if (!in) {
		cout << "Open file FAILED!" << endl;
		exit(1);
	}

	vector<pair<string, float> > data;
	string s;
	float v;
	while (in >> s && in >> v) {
		data.push_back({s,v});
	}

	for (auto x:data) {
		cout << x.first << " " << x.second << endl;
	}
	return 0;
}