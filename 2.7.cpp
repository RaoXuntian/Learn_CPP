#include<iostream>

using namespace std;

void yi();
double er();
void six(int hour, int minute);

int main(int argc, char const *argv[])
{
	yi();
	er();

	int hour;
	int minute;
	cout << "Enter the number of hours: ";
	cin >> hour;
	cout << "Enter the number of minutes: ";
	cin >> minute;
	six(hour, minute);
	return 0;
}

void yi(){
	cout << "my name is RXT." << endl;
}

double er(){
	cout << "Please input a number:" ;
	double wave;
	cin >> wave;
	cout << wave << " wave = " << 220 * wave << " ma." << endl;
	return 220 * wave;
}

void six(int hour, int minute){
	cout << "Time:" << hour << ":" << minute << endl;
}
	
