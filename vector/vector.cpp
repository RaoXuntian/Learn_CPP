#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main() {
	int len = 10;
	//定义二维数组，默认均为0
	std::vector<std::vector<bool> > dp(len, std::vector<bool>(len));
	for (int i = 0; i < dp.size(); i++) {
		for (int j = 0; j < dp[i].size(); j++)
		{
			cout << boolalpha << dp[i][j] << " ";
		}
		cout << endl;
	}
	string aa = "Activate aa";
	char a[] = "Helloworld";

	//bool* b = new bool[len];
	bool** b = new bool*[len];
	for (int i = 0; i < len; ++i) {
		b[i] = new bool[len]; //b[i]是指针
	}
	//memset(b, true, len*len);
	for (int i = 0; i < len; ++i)
	{
		for (int j = 0; j < len; ++j)
		{
			b[i][j] = true;
			//cout << b+i+j << " ";
			cout << boolalpha << b[i][j] << " ";
		}
		cout << endl;
	}

	cout << "char a[] = " << a << ", strlen(a) = " << strlen(a) << endl;
	cout << "string aa = " << aa << ", aa.size() = " << aa.size() << endl;

	aa.push_back('@');
	cout << "After push_back(' ') aa = " << aa << endl;
	
	std::vector<char> str;
	//向str中添加元素
	for (int i = 0; i < strlen(a); ++i)
	{
		str.push_back(a[i]);
		cout << str[i] << ", ";
	}
	cout << endl;
	//cout << str << endl;
	for (int i = 0; i < 5; ++i)
	{
		str.pop_back();
	}
	cout << "After pop_back() " << endl;
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << ", ";
	}
	cout << endl;

	//翻转
	reverse(str.begin(), str.end());
	cout << "After reverse(str.begin(), str.end()) " << endl;
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << ", ";
	}
	cout << endl;

	//迭代器
	cout << "iterator --> ";
	vector<char>::iterator it;//声明一个迭代器，来访问vector容器，作用：遍历或者指向vector容器的元素 
    for(it=str.begin(); it!=str.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout << endl;
	return 0;
}
