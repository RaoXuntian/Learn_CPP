//https://www.hackerrank.com/challenges/sherlock-and-valid-string/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D%5B%5D%5B%5D=strings&isFullScreen=true
#include <iostream>
#include <map>
#include <vector>
using namespace std;

// Complete the isValid function below.
string isValid(string s) {
    int n=s.size();
    map<char, int> mp;
    for (char x:s) ++mp[x];
    int cnt=mp.size();
    //if (n%cnt==0) return "YES";
    map<int,int> fre;
    for (auto it=mp.begin(); it!=mp.end(); ++it) {
        //cout << it->first << " " << it->second << endl;
        ++fre[it->second];
    }
    int t=fre.size();
    cout << t << endl;
    if (t>2) return "NO";
    if (t==1) return "YES";
    if (t==2 && fre.find(1)!=fre.end()&&fre[1]==1) return "YES";
    auto it=fre.begin();
    int a=it->first;
    int ac=it->second;
    ++it;
    int b=it->first;
    int bc=it->second;
    //if (abs(a-b)==1 && (bc==1)) return "YES";
    if (a<b) {
        if (b-a==1 && bc==1) return "YES";
        else return "NO";
    }
    else {
        if (a-b==1 && ac==1) return "YES";
        else return "NO";
    }
    return "NO";
}

int main(int argc, char const *argv[])
{
    string s="xxxaabbccrry";
    isValid(s);
    cout << isValid(s) << endl;
    return 0;
}