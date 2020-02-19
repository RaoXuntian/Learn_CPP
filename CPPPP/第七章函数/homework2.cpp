#include<iostream>
using namespace std;

const int SLEN = 30;
struct student
{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[], int n);

void display1(student st);

void display2(const student* ps);

void display3(const student pa[], int n);

int main(int argc, char const *argv[])
{
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;

	student* ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; ++i)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete [] ptr_stu;
	cout << "Done.\n";
	return 0;
}

int getinfo(student pa[], int n)
{
	cout << "Enter " << n << " students' infomation:\n";
	int i = 0;
	cout << "student #1: \n";
	cout << "fullname --> ";
	cin.getline(pa[i].fullname, SLEN);
	while(strcmp(pa[i].fullname, " "))
	{
		cout << "hobby --> ";
		cin.getline(pa[i].hobby, SLEN);
		cout << "ooplevel --> ";
		cin >> pa[i].ooplevel;
		cin.get();
		if(++i >= n)
			break;
		cout << "student #" << i+1 <<": \n";
		cout << "fullname --> ";
		cin.getline(pa[i].fullname, SLEN);
	}
	
	cout << "get " << i << " students' infomation.\n";
	return i;
}

void display1(student st)
{
	cout << "fullname:\t" << st.fullname << endl;
	cout << "hobby:\t" << st.hobby << endl;
	cout << "ooplevel:\t" << st.ooplevel << endl;
	cout << "***************\n";
}

void display2(const student* ps)
{
	cout << "*fullname:\t" << ps->fullname << endl;
	cout << "*hobby:\t" << (*ps).hobby << endl;
	cout << "*ooplevel:\t" << ps->ooplevel << endl;
	cout << "***************\n";
}

void display3(const student pa[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		pa += i;
		cout << "**fullname:\t" << pa->fullname << endl;
		cout << "**hobby:\t" << (*pa).hobby << endl;
		cout << "**ooplevel:\t" << pa->ooplevel << endl;
		cout << "***************\n";
	}
}