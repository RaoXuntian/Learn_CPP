#include <iostream>
#include <bitset>

//using namespace std;
void print_bin(int);

int main(int argc, char const *argv[])
{
	//std::cout << ~-1 << std::endl;
	//std::cout << ~-2 << std::endl;
	std::cout << "\n*****\t~运算(按位非运算)\t*****" << std::endl;
	for (int i = -8; i < 8; i++) {
		std::cout << "~(" << i << ") = " << ~i;
		std::cout << "  ~" << std::bitset<4>(i) << " = " << std::bitset<4>(~i) << std::endl;
	}

	std::cout << "\n*****\t&运算(按位与运算)\t*****" << std::endl;
	std::cout << std::bitset<4>(3) << "(3) & " << std::bitset<4>(5) << "(5) = "
			 << std::bitset<4>((3&5)) << "(" << (3&5) << ")" << std::endl;
	//print_bin(3);

	std::cout << "\n*****\t|运算(按位或运算)\t*****" << std::endl;
	std::cout << std::bitset<4>(3) << "(3) | " << std::bitset<4>(5) << "(5) = "
			 << std::bitset<4>((3|5)) << "(" << (3|5) << ")" << std::endl;
	
	std::cout << "\n*****\t^运算(按位异或运算)\t*****" << std::endl;
	std::cout << std::bitset<4>(3) << "(3) ^ " << std::bitset<4>(5) << "(5) = "
			 << std::bitset<4>((3^5)) << "(" << (3^5) << ")" << std::endl;
	/* https://leetcode-cn.com/problems/single-number/
	交换律：a ^ b ^ c <=> a ^ c ^ b

	任何数于0异或为任何数 0 ^ n => n

	相同的数异或为0: n ^ n => 0
	*/
	return 0;
}

void print_bin(int n) {
	int t = n / 2;
	if (t) {
		print_bin(t);
	}
	std::cout << n % 2 ;
}