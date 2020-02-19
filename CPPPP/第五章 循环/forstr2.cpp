#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	cout << "Enter a word: ";
	string word;
	cin >> word;

	char temp;
	int i, j;
	for (int j = 0, i =word.size()-1; j < i; ++j, --i)
	{
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	cout << word << "\nDone\n";
	return 0;
}