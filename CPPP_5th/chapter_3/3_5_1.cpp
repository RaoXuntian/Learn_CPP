#include <iostream>
#include <vector>
using namespace std;

string sa[10];
int ia[10];

int main(int argc, char const *argv[])
{
	unsigned cnt = 42;
	constexpr unsigned sz = 42;
	int arr[10];
	int *parr[sz];
	string bad[cnt];
	//string strs[get_size()];

	const int a = 42;
	//a = 41;
	const int *p = &a;

	char a1[] = {'C', '+', '+'};
	char a2[] = {'C', '+', '+', '\0'};
	char a3[] = "C++";
	//const char a4[3] = "C++";

	cout << a1 << " | strlen(a1) = " << strlen(a1) << " | sizeof(a1) = " << sizeof(a1) << endl;
	cout << a2 << " | strlen(a2) = " << strlen(a2) << " | sizeof(a2) = " << sizeof(a2) << endl;
	cout << a3 << " | strlen(a3) = " << strlen(a3) << " | sizeof(a3) = " << sizeof(a3) << endl;

	string sa2[10];
	int ia2[10];

	cout << "sa = " << sa << ", ia = " << ia << endl;
	cout << "sa2 = " << sa2 << ", ia2 = " << ia2 << endl;

	for (int i = 0; i < 10; ++i) {
		cout << "ia[" << i <<"] = " << ia[i] << "  ia2[" << i <<"] = " << ia2[i] << endl;
	}

	for (int i = 0; i < 10; ++i) {
		cout << "sa[" << i <<"] = " << sa[i] << "  sa2[" << i <<"] = " << sa2[i] << endl;
	}
	return 0;
}
