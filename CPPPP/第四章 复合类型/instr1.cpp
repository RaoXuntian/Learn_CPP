#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name: \n";
	cin >> name;
	cout << "Enter your favorite dessert: \n";
	cin >> dessert;
	cout << "I have some delicious " << dessert
		<< " for you, " << name << endl;
	return 0;
}