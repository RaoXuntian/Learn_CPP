#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	cout << "What year was your house built? \n";
	int year;
	cin >> year;
	//cin.get();
	cout << "what is its street address? \n";
	char address[80];
	cin.getline(address, 80);

	cout << "Year built: " << year << endl;
	cout << "Address: " << address << endl;
	cout << "Done!" << endl;
	return 0;
}