#include <iostream>

void out_1() {
	std::cout << "/*" << std::endl;
}

void out_2() {
	std::cout << "*/" << std::endl;
} 

void out_3() {
	std::cout << /* "*/" */ "<< std::endl;
}

void out_4() {
	std::cout << /* "*/" /* "/*" */ << std::endl;
}

int main(int argc, char const *argv[])
{
	/* 
	code
	*/
	out_1();
	out_2();
	out_3();
	out_4();
	return 0;
}