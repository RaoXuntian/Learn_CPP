#include<iostream>
#include<cstring>

using namespace std;

void one();
void three();
void five();
void seven();

int main(int argc, char const *argv[])
{
	//one();
	//three();
	//five();
	seven();
	return 0;
}

void one(){
	char first_name[20], last_name[20];
	char grade;
	int age;

	cout << "What is your first name? ";
	cin.getline(first_name, 20);
	cout << "What is your last name? ";
	cin.get(last_name, 20).get();
	cout << "What letter grade do your deserve? ";
	cin.get(grade);
	cout << "What is your age? ";
	cin >> age;

	cout << "Name: " << last_name << ", " << first_name
		<< "\nGrade: " << char(grade+1)
		<< "\nAge: " << age << endl;
}

void three(){
	char first_name[20];
	string last_name;

	cout << "Enter your first name: ";
	cin.getline(first_name, 20);
	cout << "Enter your last name: ";
	getline(cin, last_name);

	cout << "Here's the information in a single string: "
		<< last_name << ", " << first_name <<endl;
}

void five(){
	struct CandyBar
	{
		string brand;
		float weight;
		int calori;
	};

	CandyBar snack = {"Mocha Munch", 2.3, 350};
	cout << "Brand: " << snack.brand <<endl;
	cout << "Weight: " << snack.weight <<endl;
	cout << "Cal: " << snack.calori << endl;

	CandyBar foo;
	cout << "Enter foo's brand: ";
	getline(cin, foo.brand);
	cout << "Enter foo's weight: ";
	cin >> foo.weight;
	cout << "Enter foo's calori: ";
	cin >> foo.calori;

	cout << "foo's brand: " << foo.brand << endl;
	cout << "foo's weight: " << foo.weight << endl;
	cout << "foo's calori: " << foo.calori <<  endl;
}

void seven(){
	struct piza
	{
		string name;
		float R;
		int weight;
	};

	piza* ppp = new piza;

	cout << "Enter piza's weight: ";
	cin >> ppp->weight;
	cin.get();
	cout << "Enter piza's company: ";
	getline(cin, ppp->name);
	cout << "Enter piza's R: ";
	cin >> ppp->R;
	

	cout << "ppp's name: " << ppp->name << endl;
	cout << "ppp's R: " << ppp->R << endl;
	cout << "ppp's weight: " << ppp->weight << endl;
}