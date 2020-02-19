#include<iostream>
struct inflatable{
	char name[20];
	float volume;
	double price;
};

using namespace std;

int main(int argc, char const *argv[])
{
	inflatable guest = 
	{
		"Rao Xuntian",
		1.88,
		29.99
	};

	inflatable pal = 
	{
		"Audacious Arthur",
		3.12,
		32.99
	};

	cout << "Expand your guest list with " << guest.name;
	cout << " and " << pal.name << " !\n";

	cout << "You can have both for $";
	cout << guest.price + pal.price << " !\n";
	return 0;
}