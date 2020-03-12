/*堆排序
1.建（大根）堆
2.堆首（最大值）和堆尾互换
3.堆的尺寸缩小1，调整大根堆
4.重复2-3
*/
#include <iostream>
#include <vector>
using namespace std;

void show(vector<int>& arr) {
	//cout << "Round " << ++count << ": ";
	int size = arr.size();
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void heapify(vector<int>& arr, int i, int n) {
	int bigIndex = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	if (l < n && arr[l] > arr[bigIndex]) bigIndex = l;
	if (r < n && arr[r] > arr[bigIndex]) bigIndex = r;
	if (bigIndex != i) {
		swap(arr[i], arr[bigIndex]);
		heapify(arr, bigIndex, n);
	}
}

void heapSort(vector<int>& arr, int n) {
	int round = 0;
	for (int i = n-1; ~i; --i) {
		swap(arr[0], arr[i]);
		heapify(arr, 0, i);
		cout << "Round " << ++round << ": ";
		show(arr);
	}
}

void builtMaxHeap(vector<int>& arr, int n) {
	for (int i = n/2-1; ~i; i--) {
		heapify(arr, i, n);
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
	cout << "Built max heap..." << endl;
	builtMaxHeap(arr, size);
	cout << "Max Heap: ";
	show(arr);
	cout << "Heap sorting ..." << endl;
	heapSort(arr, size);
	show(arr);
}