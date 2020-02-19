#include<iostream>
const int Cities = 5;
const int Years = 4;

using namespace std;

int main(int argc, char const *argv[])
{
	const char* cities[Cities] = 
	{
		"Wuhan City",
		"Beijing City",
		"Guangzhou City",
		"Hongkong",
		"Wuxue City"
	};
	int maxtemps[Years][Cities] = 
	{
		{95, 99, 86, 100, 104},
		{95, 100, 88, 99, 103},
		{96, 100, 90, 107, 98},
		{97, 102, 89, 108, 103}
	};

	cout << "MAxumum temperatures for 2002 - 2005\n\n";
	for (int city = 0 ; city < Cities; ++city)
	{
		cout << cities[city] << ":\t";
		for (int year = 0; year < Years; ++year)
			cout << maxtemps[year][city] << "\t";
		cout << endl;
	}
	return 0;
}