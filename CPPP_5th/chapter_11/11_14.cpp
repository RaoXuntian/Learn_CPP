#include <iostream>
#include <map>
#include <vector>
#include <utility>
#include <algorithm>
#include <string>
using namespace std;

void add_family(map<string, vector<pair<string, string> > > &families, const string& family) {
	families[family];
}

void add_child(map<string, vector<pair<string, string> > > &families, const string& family,
	const string& child, const string& birthday) {
	families[family].push_back({child, birthday});
}

int main(int argc, char const *argv[])
{
	map<string, vector<pair<string, string> > > families;

	add_family(families, "Zhang");
	add_child(families, "Zhang", "Xiaolong", "1997-01-30");
	add_child(families, "Xiong", "Xin", "1996-11-23");
	add_child(families, "Xia", "Qi", "1997-02-02");

	for (auto f:families) {
		cout << f.first << "家的孩子: ";
		for (auto c:f.second) {
			cout << c.first << "(生日" << c.second << "), ";
		}
		cout << endl;
	}
	return 0;
}