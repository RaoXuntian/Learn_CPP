#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	cout << "The Amazing Account will sum and average: ";
	cout << "five numbers for you.\n";
	cout << "Please enter five values: \n";
	double number;
	double sum = 0.0;
	for (int i = 1; i <= 5; i ++)
	{
		cout << "value " << i << ": ";
		cin >> number;
		sum += number;
	}
	cout << "Five exquisite choices indeed! ";
	cout << "They sum to " << sum << endl;
	cout << "and average to " << sum / 5 << endl;
	cout << "The Amazing Account bids you adieu!\n";
	
	return 0;
}