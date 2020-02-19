#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	char ch;
	int count = 0;
	cin.get(ch);
	while(cin.fail() == false)
	{
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << " Characters read.\n";
	return 0;
}