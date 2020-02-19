#include<iostream>
using namespace std;

class A {
public:
	A():i(10){ }
	virtual void f() { cout << "A::f()" << i << endl; }
	
	int i;
};

class B: public A{
public:
	B():j(20){ }
	virtual void f() { cout << "B::f()" << j << endl;}
	
	int j;
};

int main(){
	A a;
	B b;

	A* p = &a;

	int* r = (int*)&a;
	int* t = (int*)&b;

	*r = *t;
	p->f();

	return 0;
}
