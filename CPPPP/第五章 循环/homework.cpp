#include<iostream>
#include<cstring>

using namespace std;

void nine();
void seven();

int main(int argc, char const *argv[])
{
	seven();
	//nine();
	return 0;
}

void nine()
{
	int rows;
	cout << "Enter number of rows: ";
	cin >> rows;
	char pic[rows][rows];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			if (i + j >= rows-1) 
				pic[i][j] = '*';
			else
				pic[i][j] = '.';
		}
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			cout << pic[i][j];
		}
		cout << endl;
	}
}

void seven()
{
	string words;
	cin >> words;
	int count = 0;
	while (words != "done")
	{
		//cout << words;
		++count;
		cin >> words;
	}
	cout << endl << count << endl;
}