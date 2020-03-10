#include<iostream>

using namespace std;

void hight_1();
void degree();
void disiti();

int main(int argc, char const *argv[])
{
	//hight_1();
	//degree();
	disiti();
	return 0;
}

void hight_1(){
	const int flag = 100;
	float m;
	cout << "please input your hight (m):";
	cin >> m;
	cout << m * flag << "cm" << endl;
}

void degree(){
	int degress, minutes, seconds;
	float res;
	cout << "Enter a latitude in degress, minutes, and seconds:" << endl;
	cout << "First,, enter the degress: ";
	cin >> degress;
	cout << "Next, enter the minutes of arc: ";
	cin >> minutes;
	cout << "Finally, enter the seconds of arc: ";
	cin >> seconds;
	res = degress + (float)minutes / 60 + (float)seconds /60 /60;
	printf("%d degrees, %d minutes, %d seconds = %.4f degress\n", degress, minutes, seconds, res);
}

void disiti(){
	long seconds, sss ;
	int days, hours, minutes;
	const long day2second = 24 * 60 * 60;
	const long hour2second = 60 * 60;
	cout << "Enter the number of seconds:" ;
	cin >> seconds;
	sss = seconds;
	days = seconds / day2second;
	seconds = seconds % day2second;
	hours = seconds / hour2second;
	seconds = seconds % hour2second;
	minutes = seconds / 60;
	seconds = seconds % 60;
	printf("%ld seconds = %d days, %d hours, %d minutes, %ld seconds\n",sss, days, hours, minutes, seconds );
}