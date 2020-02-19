#include <iostream>

using namespace std;

int main(){
	const int ci = 54;
	int* ip;
	const int* cip = &ci;

	*ip = 54;
	//ip = &ci;
	//*cip = 54;

	cout << "ip->" << ip
		<< "  cip->" << cip << endl;

	return 0;
}
