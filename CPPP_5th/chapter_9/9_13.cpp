#include <iostream>
#include <vector>
#include <list>
using namespace std;
//从一个list<int>初始化vector<double>
int main(int argc, char const *argv[])
{
	list<int> ilist={1,2,3,4,5,6,7};
	vector<int> ivec={7,6,5,4,3,2,1};
	//vector<double> dvec(ilist);
	vector<double> dvec(ilist.begin(), ilist.end());
	//vector<double> dvec(ivec);
	vector<double> dvec1(ivec.begin(), ivec.end());

	cout << dvec.capacity() << " " << dvec.size() << " " << dvec[0] << " " << dvec[dvec.size()-1] << endl;
	cout << dvec1.capacity() << " " << dvec1.size() << " " << dvec1[0] << " " << dvec1[dvec1.size()-1] << endl;
	
	vector<int> ivec1={1,2,3};
	swap(ivec1, ivec);
	cout << ivec.capacity() << " " << ivec.size() << " " << ivec[0] << " " << ivec[ivec.size()-1] << endl;
	cout << ivec1.capacity() << " " << ivec1.size() << " " << ivec1[0] << " " << ivec1[ivec1.size()-1] << endl;
	
	return 0;
}