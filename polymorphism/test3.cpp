#include <iostream>
using namespace std;

class A
{
public:
	A() {cout << "a new A" << endl;};
	virtual ~A() {cout << "~A()" << endl;};
	virtual void fun() {cout << "This is A." << endl;} ;
};

class B :public A
{
public:
	B() {cout << "a new B" << endl;};
	virtual ~B() {cout << "~B()" << endl;};
	virtual void fun() {cout << "This is B." << endl;} ;
};

class C :public B
{
public:
	C() {cout << "a new C" << endl;};
	virtual ~C() {cout << "~C()" << endl;};
	virtual void fun() {cout << "This is C." << endl;} ;
};

int main() {
	A* b=new B(); //This is B.
	A* c=new C(); //This is C.
	b->fun();
	c->fun();
	delete b; //~B() ~A()
	delete c; //~C() ~B() ~A()
	return 0;
}