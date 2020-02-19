#include "Person.h"
#include <iostream>

Person f(){
	Person ip;
	return ip;
}

int main()
{
	/*
	Person p1("John");

	Person p2(p1);
	
	printf("p1.name = %p\n", p1.name);
	printf("p2.name = %p\n", p2.name);
	*/
	Person p = f();
	return 0;
}
