#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	//i++和++i的区别
	/* 
		i++和++i都是c语言里的自增，但是它们自增的顺序不同。
		++i表示，i自增1后再参与其它运算，而i++ 则是i参与运算后，i的值再自增1。
	*/
	int b;
	int a = 5;
	b = a++;
	cout << "b = " << b <<", a = " << a << endl;

	int d;
	int c = 10;
	d = (c++) + (++c);	// d = 10 + 12 = 21
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
	return 0;
}