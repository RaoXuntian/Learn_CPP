#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int i = 0;
	int *const p1 = &i; //顶层const
	const int c1 = 42;	//顶层const
	const int *p2 = &c1;	//底层const
	const int *const p3 = p2;	//靠右的是顶层const，靠左的是底层const
	const int &r = c1;	//用于声明的都是底层const

	const int *p = &i; 	//p指向一个int的常量const
	// (*p)++ //Error! //不能通过指针p去修改i的值
	cout << "*p = " << *p << endl;
	i++;
	cout << "*p = " << *p << endl;


	//int *const ppp; //常量指针 不能为空 要初始化
	const int * ppp;
	return 0;
}