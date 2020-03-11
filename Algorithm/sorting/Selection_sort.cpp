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

void selectionSort(vector<int>& arr) {
	int len = arr.size();
	int cur = -1, count = -1;
	cout << "Round " << ++count << ": ";
	show(arr);
	while(++cur < len-1) {
		int minIndex = cur;
		for (int i = cur+1; i < len; i++) {
			if (arr[i] < arr[minIndex]) {
				minIndex = i;
			}
		}
		swap(arr[cur], arr[minIndex]);
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
	cout << "Selection sorting ..." << endl;
	selectionSort(arr);
	show(arr);
}