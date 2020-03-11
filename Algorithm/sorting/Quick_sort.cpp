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

int partition(vector<int>& arr, int low, int high) {
	int target = arr[low];
	while (low < high) {
		while (low < high && arr[high] >= target) high--;
		if (arr[high] < target) arr[low++] = arr[high];
		while (low < high && arr[low] <= target) low++;
		if (arr[low] > target) arr[high--] = arr[low];
	}
	arr[low] = target;
	cout << "Round x: " ;
	show(arr);
	return low;
}

void quickSort(vector<int>& arr, int low, int high) {
	if (low < high) {
		int p = partition(arr, low, high);

		quickSort(arr, low, p-1);
		quickSort(arr, p+1, high);
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
	//quick sort
	cout << "Quick sorting ..." << endl;
	quickSort(arr, 0, size-1);
	show(arr);
}