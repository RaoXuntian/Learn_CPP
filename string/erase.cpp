#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string s="HeLLo,wOrlD."	;

	for (int p=0; p<s.size(); ++p) {
		if (s[p]>='A' && s[p]<='Z') 
			s[p]-= ('A'-'a');
		else if (s[p]==',' || s[p]=='.' || s[p]=='[' || s[p]==']')
			s.erase(p,1);
	}

	cout << s << endl;
	return 0;
}