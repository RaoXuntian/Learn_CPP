#include <iostream>
using namespace std;

class A
{
public:
	A() {};
	virtual ~A() {cout << "~A()" << endl;};
	virtual void fun() {cout << "This is A." << endl;} ;
};

class B :public A
{
public:
	B() {};
	virtual ~B() {cout << "~B()" << endl;};
	virtual void fun() {cout << "This is B." << endl;} ;
};

class C :public B
{
public:
	C() {};
	virtual ~C() {cout << "~C()" << endl;};
	virtual void fun() {cout << "This is C." << endl;} ;
};

int main() {
	A* b=new B(); //This is B.
	A* c=new C(); //This is C.
	b->fun();
	c->fun();
	delete b; //~B() ~C()
	delete c; //~B() ~C() ~A()
	return 0;
}