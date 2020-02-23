#include <iostream>
#include <vector>
#include <list>
#include <deque>

using namespace std;

int main() {
	vector<char> vec;
	char ch;
	cout << "Please input :" << endl;
	ch = cin.get();
	while (ch != '\n') {
		vec.push_back(ch);
		ch = cin.get();
	}
	cout << "依次遍历: ";
	for (int i=0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}
	cout << endl;

	cout << "迭代器: ";
	for (vector<char>::iterator it = vec.begin(); it != vec.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	cout << "vec.size() = " << vec.size() << endl;


	//list<char> lis(vec);
	char count = '0';
	vector<char>::iterator ip = vec.begin()+1;
	cout << "Before: ip -> " << &ip << "  *ip = " << *ip << endl;
	vec.insert(ip, count);
	//ip = vec.begin();
	cout << "After: ip -> " << &ip << "  *ip = " << *ip << endl;
	ip += 2;
	cout << "After: ip -> " << &ip << "  *ip = " << *ip << endl;
	
	while(ip != vec.end()) {
		//insert()会返回一个iterator，指向被安插的元素
		ip = vec.insert(ip, count);
		count ++;
		ip+=2;
	}
	cout << "vec.size() = " << vec.size() << endl;
	cout << "依次遍历: ";
	for (int i=0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}
	cout << endl;

	cout << "迭代器: ";
	for (vector<char>::iterator it = vec.begin(); it != vec.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	return 0;
}
