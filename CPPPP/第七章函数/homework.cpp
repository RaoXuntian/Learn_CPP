#include <iostream>
#include <cstring>

using namespace std;

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void one();
float one_ave(float, float);
void two();
void three();
void three_a(box);
box three_b(box*);
void five();
int five_help(int n);
void six();
int Fill_array(double*, int);
int Show_array(double*, int);
int Reverse_array(double*, int);

int main(int argc, char const *argv[])
{
	//one();
	//two();
	//three();
	//five();
	six();
	return 0;
}

void six()
{
	//double* ttt = new double [10];
	double ttt[10];
	int len = Fill_array(ttt, 10);
	Show_array(ttt, len);
	Reverse_array(ttt, len);
	Show_array(ttt, len);
	Reverse_array(ttt+1, len-2);
	Show_array(ttt, len);
}

int Fill_array(double* name, int len)
{
	int i = 0;
	cout << "Enter double: \n";
	if (len == 0)
	{
		cout << "len is 0\n";
		return 0;
	}
	cout << "#1: "; 
	///* 错误！！！会输出11个double？
	while (cin >> name[i] && ++i < len)
	{
		cout << "#" << i+1 << ": ";
	}
	//*/
	/*while (i < len && cin >> name[i])
	{
		if (++i < len)
			cout << "#" << i+1 << ": ";
	}*/
	return i;
}

int Show_array(double* name, int len)
{
	cout << "Show array:" << endl;
	for (int i = 0; i < len; ++i)
	{
		cout << name[i] << " ";
	}
	cout << "\nShow Done.\n";
	return 0;
}

int Reverse_array(double* name, int len)
{
	int start = 0;
	int end = len-1;
	for (; start <= end; start++, end--)
	{
		double tmp;
		tmp = name[start];
		name[start] = name[end];
		name[end] = tmp;
	}
	/*for (int j = 0; j < len; ++j)
	{
		cout << name[j] << endl;
	}*/
	cout << "Reverse_array Done.\n";
	return 0;
}

int six_help(double* name, int len)
{
	//double name[len];
	int i = 0;
	cout << "Enter double: ";
	if (len == 0)
	{
		cout << "len is 0\n";
		return 0;
	}
	while (cin >> name[i] && i++ < len)
	{

	}
	for (int j = 0; j < i; ++j)
	{
		cout << name[j] << endl;
	}
	cout << "Show_array Done.\n";

	int start = 0;
	int end = i-1;
	for (; start <= end; start++, end--)
	{
		double tmp;
		tmp = name[start];
		name[start] = name[end];
		name[end] = tmp;
	}
	for (int j = 0; j < i; ++j)
	{
		cout << name[j] << endl;
	}
	cout << "Reverse_array Done.\n";
	return i;
}

void five()
{
	int n;
	cout << "Enter an integer: ";
	while (cin >> n)
	{
		if (n < 0)
		{
			cout << "Data ERROR! " << endl;
		}
		else
			cout << n << "! = " << five_help(n) << endl;
		cout << "Enter again: ";
	}
	cout << "Done.\n";
}

int five_help(int n)
{
	if (n == 0)
		return 1;
	else
		return n * five_help(n-1);
}

void three()
{
	box aaa = {"hust", 100, 200, 300, 10000};
	three_a(aaa);
	box* pa = &aaa;
	three_a(three_b(pa));
}

box three_b(box* bbb)
{
	bbb->volume = bbb->height * bbb->width * bbb->length;
	return *bbb;
}

void three_a(box aaa)
{
	cout << "maker:\t" << aaa.maker << endl;
	cout << "height:\t" << aaa.height << endl;
	cout << "width:\t" << aaa.width << endl;
	cout << "length:\t" << aaa.length << endl;
	cout << "volume:\t" << aaa.volume << endl;
	//return aaa;
}

void two()
{
	float scores[10];
	float sum = 0.0;
	int i = 0;
	cout << "Enter score #1: ";
	while (cin >> scores[i] && ++i < 10)
	{
		cout << "Enter score #" << i + 1 << ": ";
		//sum += scores[i];
	} 
	cout << i << " numbers are: ";
	//cout << sum << endl;
	if (i == 0)	
	{
		cout << "No data!" << endl;
		return ;
	}
	for (int j = 0; j < i; ++j)
	{
		cout << scores[j] << " ";
		sum += scores[j];
	}
	cout << endl;
	cout << "Average is " << sum / i << endl;
}

void one()
{
	float a, b;
	cout << "Enter two numbers: ";
	cin >> a >> b;
	while (a * b != 0)
	{
		cout << "average is " << one_ave(a, b) << endl;
		cout << "Enter two numbers again: ";
		cin >> a >> b;
	}
	cout << "Done.\n";
}

float one_ave(float a, float b)
{
	return 2.0 * a * b / (a + b);
}