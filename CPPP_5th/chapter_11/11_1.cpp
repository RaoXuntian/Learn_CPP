#include <iostream>
#include <fstream>
#include <map>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	ifstream in(argv[1]);
	if (!in) {
		cout << "打开输入文件失败！" << endl;
		exit(1);
	}
	set<char> exclude={'0','1','2','3','4','5','6','7','8','9',' '};
	map<char, size_t> word_count;
	char word;
	while(in >> word) {
		if (exclude.find(word)!=exclude.end()) continue;
		++word_count[word];
	}
	for (auto w:word_count) {
		cout << w.first << "\t出现了\t" << w.second << "次" << endl;
	}
	return 0;
}