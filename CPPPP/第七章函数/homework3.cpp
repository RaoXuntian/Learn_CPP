#include<iostream>
using namespace std;

double add(double, double);
double calculate(double, double, double(*pt)(double, double));

int main(int argc, char const *argv[])
{
	double q = calculate(2.5, 10.4, add);
	cout << q << endl;
	return 0;
}

double add(double x, double y)
{
	return x + y;
}

double calculate(double a, double b, double(* add)(double, double))
{
	//(*add).x = a;
	//(*add).y = b;
	return (*add)(a, b);
}