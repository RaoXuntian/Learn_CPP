#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	ifstream in_file("./sort.cpp");
	ofstream out_file("./out.txt");

	if (! in_file || ! out_file)
	{
		cerr << "!!files ERROR!!" << endl;
		return -1;
	}

	istream_iterator<string> is(in_file);
	istream_iterator<string> eof;

	std::vector<string> text;
	copy(is, eof, back_inserter(text));

	sort(text.begin(), text.end());

	ostream_iterator<string> os(out_file, " ");
	copy(text.begin(), text.end(), os);
	return 0;
}