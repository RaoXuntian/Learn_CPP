#include <iostream>
#include <vector>
using namespace std;

void show(vector<int>& arr) {
	int size = arr.size();
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void insertionSort(vector<int>& arr) {
	int len = arr.size();
	int cur = -1, count = 0;
	cout << "Round " << count << ": ";
	show(arr);
	while (++cur < len) {
		for (int i = cur; ~i; i--) {
			if (arr[i] >= arr[i-1]) break;
			else swap(arr[i], arr[i-1]);
		}
		cout << "Round " << ++count << ": ";
		show(arr);
	}
}

int main() {
	cout << "Please input the number of elements: ";
	int size;
	cin >> size;
	std::vector<int> arr;
	for (int i = 0; i < size; i++) {
		int tmp;
		cin >> tmp;
		arr.push_back(tmp);
	}
	cout << "Insertion sorting ..." << endl;
	insertionSort(arr);
	show(arr);
}