#include <iostream>
#include <bitset>
#include <iomanip>

using namespace std;

int main()

{

	float a=12.257902012398877;

	double b=12.257902012398877;

	const float PI=3.1415926;   //常量定义

	cout<<setprecision(15)<<a<<endl;  //只有6-7位有效数字，后面的就不精确

	cout<<setprecision(15)<<b<<endl;  //有15-16位有效数字，所以完全正确

	cout<<setprecision(15)<<PI<<endl; 

	unsigned u = 11;
	//for (; u >= 0; --u) {
		cout << u << endl;
	//}
	while (u > 0) {
		--u;
		cout << u << endl;
	}

	unsigned t = -1;
	cout << t << endl;
	cout << bitset<32>(t) << endl;

	return 0;

}