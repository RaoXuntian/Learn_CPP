#include<iostream>
const int Fave = 27;

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	 cout << "Enter a number in the range 1-100 to find ";
	 cout << "my favorite number: ";
	 do
	 {
	 	cin >> n;
	 	if (n < Fave)
	 		cout << "To low -- guess again: ";
	 	else if (n > Fave)
	 		cout << "To high -- guess again: ";
	 	else
	 		cout << Fave << " is right!\n";
	 }while (n != Fave);
	return 0;
}