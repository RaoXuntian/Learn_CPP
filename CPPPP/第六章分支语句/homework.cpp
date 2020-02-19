#include<iostream>
#include<cctype>
#include<cstring>
#include<fstream>

using namespace std;

void one();
void two();
void three();
void four();
void five();
void seven();
void eight();

int main(int argc, char const *argv[])
{
	//one();
	//two();
	//three();
	//four();
	//five();
	//seven();
	eight();
	return 0;
}

void one()
{
	char ch;
	//int delta = 'a' - 'A';
	cin.get(ch);
	while(ch != '@')
	{
		if (isdigit(ch))
			cout << "";
		else if (isupper(ch))
			cout << (char)tolower(ch);
		else if (islower(ch))
			cout << (char)toupper(ch);
		else
			cout << (char)ch;

		cin.get(ch);
	}
	cout << endl;
}

void two()
{
	double donation[10];
	double average;
	double sum = 0.0;
	int count = 0;
	int big = 0;
	cout << "Enter donation #1: ";
	while (count < 10 && cin >> donation[count])
	{
		sum += donation[count];
		++count;
		cout << "Enter donation #" << count + 1 << ": ";
	}

	if (count == 0)
	{
		cout << "No number!!!" << endl;
		cout << "Done!" << endl;
		exit(0);
	}
	else
	{
		average = sum / count;
		cout << "Average is " << average << endl;
	}
	for (int i = 0; i < count; i++)
	{
		if (donation[i] > average)
			big ++;
	}
	cout << big << " numbers bigger than average!" << endl;
	cout << "Done!" << endl;
}

void three()
{
	char choice;
	cout << "Please enter one of the following choices:" << endl;
	cout << "c)carnivore\tp)pianist"
			"t)tree\tg)game\nq)quit\n" << endl;
	cout << "Please enter a c,p,t, or g: ";
	cin >> choice;
	while (choice != 'q')
	{
		switch (choice)
		{
			case 'c': cout << "This is carnivore!" << endl; break;
			case 'p': cout << "This is pianist!" << endl; break;
			case 't': cout << "This is tree!" << endl; break;
			case 'g': cout << "This is game!" << endl; break;
			default: cout << "That's not a choice.\n";
		}
		cout << "Please enter a c,p,t, or g: ";
		cin >> choice;
	}

	cout << "Done!!" << endl;
}

const int strsize = 20;
const int ArraySize = 2;
struct bop
	{
		char fullname[strsize];
		char title[strsize];
		char bopname[strsize];
		int preference;
	};

void display(char choice, bop* members)
{
	//int count = sizeof(*members);
	for (int i = 0; i < ArraySize; i++)
	{
		if (choice == 'a')
			cout << members[i].fullname << endl;
		else if (choice == 'b')
			cout << members[i].title << endl;
		else if (choice == 'c')
			cout << members[i].bopname << endl;
		else if (choice == 'd')
		{
			switch (members[i].preference)
			{
				case 0: cout << members[i].fullname << endl; break;
				case 1: cout << members[i].title << endl; break;
				case 2: cout << members[i].bopname << endl; break;
				default: cout << "Data ERROE!!!" << endl; break;
			}
		}
		else
			cout << "Enter error!\n";
	}
}

void four()
{
	bop xx = {"xiongxin", "master", "xiongdiudiu", 2};
	bop rao;
	cout << "Enter bop rao's fullname: ";
	cin.getline(rao.fullname, strsize);
	cout << "Enter bop rao's title: ";
	cin.getline(rao.title, strsize);
	cout << "Enter bop rao's bopname: ";
	cin.getline(rao.bopname, strsize);
	cout << "Enter bop rao's preference: ";
	cin >> rao.preference;

	bop* members = new bop [ArraySize];
	members[0] = xx;
	members[1] = rao;
	cout << sizeof(*members) << endl;
	cout << sizeof(members[0]) << endl;
	//count = sizeof(*members); //64

	char choice;
	void display(char choice, bop* members);
	cout << "BOP Report\n";
	cout << "a. display by name\tb. display by title\n"
			"c. display by bopname\td. dispaly by preference\n"
			"q. quit\n";
	cout << "Enter your choice: ";
	cin >> choice;
	while (choice != 'q')
	{
		/*switch (choice)
		{
			case 'a': display(choice, members);
				break;
			case 'b': ;
				break;
			case 'c': ;
				break;
			case 'd': ;
				break;
		}*/
		display(choice, members);
		cout << "Next choice: ";
		cin >> choice;
	}

	cout << "Bye!\n";

}

void five()
{
	int tvarp;
	double out;
	cout << "Enter your tvarp: ";
	cin >> tvarp;
	while (tvarp > 0)
	{
		if (tvarp <= 5000)
			out = 0;
		else if (tvarp <= 15000)
			out = (tvarp - 5000) * 0.1;
		else if (tvarp <= 35000)
			out = 10000 * 0.1 + (tvarp - 15000) * 0.15;
		else
			out = 10000 * 0.1 + 20000 * 0.15 + (tvarp - 35000) * 0.2;
		
		cout << out << endl;
		cout << "Enter again: ";
		cin >> tvarp;
	}

	cout << "Done!" << endl;
}

int is_in(char ch){
	char vowels[] = {'a', 'e', 'i', 'o', 'u'};
	int n = sizeof(vowels);
	for (int i = 0; i < n; i++)
	{
		if (ch == vowels[i])
			return 1;
	}
	return 0;
}

void seven()
{
	string ch;
	int v_num = 0;
	int c_num = 0;
	int o_num = 0;
	char vowels[] = {'a', 'e', 'i', 'o', 'u'};
	cout << "Enter words (q to quit):\n";
	cin >> ch;
	while (ch != "q")
	{
		int tmp = ch.size();
		int flag = 1; // 0 不是单词 1 是单词
		for (int i = 0; i < tmp; i++)
		{
			if ( !isalpha(ch[i]))
			{
				o_num++;
				flag = 0;
				break;
			}
		}
		if (flag)
		{
			if (is_in(ch[0]))
				v_num++;
			else
				c_num++;
		}

		cin >> ch;
	}
	cout << v_num << " words beginning with vowels" << endl;
	cout << c_num << " words beginning with consonants" << endl;
	cout << o_num << " others" << endl;
}

void eight()
{
	char filename[20];
	cout << "Enter waiting read file name: ";
	cin.getline(filename, 20);
	ifstream infile; // 输入流
	infile.open(filename);
	if (!infile.is_open())
	{
		cout << "open " << filename << "failed...\n";
	}
	char ch;
	int count = 0;
	int rows = 1;
	infile.get(ch);
	//Infile >> ch; //不能读取空格和回车
	cout << "#" << rows <<"  ";
	while (!infile.eof())
	{
		++count;
		cout << ch;
		if (ch == '\n')
		{
			rows ++;
			cout << "#" << rows <<"  ";
		}
		infile.get(ch);
	}
	//cout << ch << endl;
	cout << endl << count << " characters.\n";
	cout << rows << " rows.\n";
	infile.close();
}