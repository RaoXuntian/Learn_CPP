#include <iostream>
#include <vector>
using namespace std;

int activityNotifications(vector<int> expenditure, int d) {
    int cs[201]={};
    int ans=0;
    memset(cs, 0, sizeof(cs));
    for (int i=0; i<d; ++i) ++cs[expenditure[i]];
    for (int i=d; i<(int)expenditure.size(); ++i) {
        int idx1=(d-1)/2, idx2=d/2;
        int m1, m2;
        int cnt, m;
        for (cnt=0, m=0; cnt<=idx1; cnt+=cs[m], ++m) m1=m;
        //for (cnt=0, m=0; cnt<=idx2; cnt+=cs[m], ++m) m2=m;
        for (cnt=0, m=0; cnt<=idx2; ) {
        	m2=m;
        	cnt+=cs[m];
        	++m;
        }
        int next=expenditure[i];
        cout << next << " " << m1 << " " << m2 << endl;
        if (next>=m1+m2) ++ans;
        ++cs[next];
        --cs[expenditure[i-d]];
    }
    return ans;
}

int main(int argc, char const *argv[])
{
	vector<int> v={10,20,30,40,50};
	cout << activityNotifications(v, 3) << endl;
	return 0;
}

// https://www.hackerrank.com/challenges/ctci-merge-sort/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D%5B%5D=sorting