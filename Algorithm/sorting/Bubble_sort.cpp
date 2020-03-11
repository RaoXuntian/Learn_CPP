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

void bubbleSort(vector<int>& arr) {
	int len = arr.size();
	int right = len;
	int count = 0;
	while (right-- > 1) {
		for (int i = 1; i <= right; i++) {
			if (arr[i-1] > arr[i]) swap(arr[i-1], arr[i]);
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
	cout << "Bubble sorting ..." << endl;
	bubbleSort(arr);
	show(arr);
}