#include <iostream>
#include <vector>
using namespace std;
int p = 0;
void show(vector<int>& arr, int& count) {
	cout << "Round " << ++count << ": ";
	int size = arr.size();
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void merge(vector<int>& arr, int startIndex, int midIndex, int endIndex) {
	int cur = endIndex;
	vector<int> tmp;
	for (int i = midIndex + 1; i <= endIndex; i++) tmp.push_back(arr[i]);
	int p1 = midIndex, p2 = endIndex-midIndex-1;
	
	while (~(p1-startIndex) && ~p2) {
		if (tmp[p2] < arr[p1]) arr[cur--] = arr[p1--];
		else arr[cur--] = tmp[p2--];
	}

	while (~p2) {
		arr[cur--] = tmp[p2--];
	}

	while (~(p1-startIndex)) {
		arr[cur--] = arr[p1--];
	}
	
}

void mergeSort(vector<int>& arr, int startIndex, int endIndex) {
	if (startIndex < endIndex) {
		int midIndex = startIndex + ((endIndex - startIndex) >> 1);

		mergeSort(arr, startIndex, midIndex);
		mergeSort(arr, midIndex+1, endIndex);
		
		show(arr, p);
		merge(arr, startIndex, midIndex, endIndex);
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
	cout << "Merge sorting ..." << endl;
	mergeSort(arr, 0, size-1);
	show(arr, p);
}