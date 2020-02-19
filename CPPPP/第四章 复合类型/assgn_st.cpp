#include<iostream>

struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main(int argc, char const *argv[])
{
	using namespace std;

	inflatable bouquest = 
	{
		"sunflowers",
		0.20,
		12.49
	};
	inflatable choice;
	cout << "bouquest: " << bouquest.name << " for $"
		<< bouquest.price << endl;
	choice = bouquest;
	cout << "choice: " << choice.name << " for $"
		<< choice.price << endl;
	return 0;
}