#include <iostream>

int product(int, int);

int main() {
	std::cout << "Hello, World." << std::endl;
	while(1) {
		int a, b;
		std::cout << "Please input two integer: " ;
		std::cin >> a >> b; 
		if (a == 0 && b == 0) break;
		std::cout << a << " * " << b << " = " << product(a,b) << std::endl;
	}
	
	return 0;
}

int product(int a, int b) {
	if (a == 0 || b == 0) return 0;
	int flag = 1;
	if (a < 0 && b > 0) {
		flag = 0;
		a = -a;
	}
	if (a > 0 && b < 0) {
		flag = 0;
		b = -b;
	}
	if (a < 0 && b < 0) {
		a = -a;
		b = -b;
	}
	int res = 0;
	for (; b > 0; b--) {
		res += a;
	}
	
	if (!flag) res = -res;	
	return res;
}
