#include <iostream>
#include <vector>
using namespace std;

void show(vector<int> v) {
	for (auto it=v.begin(); it!=v.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
}

int main(int argc, char const *argv[])
{
	vector<int> vec={1,2,3,4,5,6,7,8};
	auto it=vec.begin();
	while (it!=vec.end()) {
		if (*it%2){
			it=vec.insert(it, *it);
			++it;
		}
		++it;
		show(vec);
	}

	return 0;
}