#include <iostream>
#include <vector>
using namespace std;

class Solution {
    vector<int> tmp;
    int cnt=0;
public:
    void merge(vector<int>& nums, int le, int mid, int ri) {
        int p1=mid, p2=ri, cur=ri;
        while (p1>=le && p2>mid) {
            if (nums[p1]>nums[p2]) {
                cnt+=p2-mid;
                tmp[cur--]=nums[p1--];
            }
            else {
                tmp[cur--]=nums[p2--];
            }
        }
        while (p1>=le) {
            tmp[cur--]=nums[p1--];
        }
        while (p2>mid) {
            tmp[cur--]=nums[p2--];
        }
        copy(tmp.begin()+le, tmp.begin()+ri+1, nums.begin()+le);
    }

    void mergeSort(vector<int>& nums, int le, int ri) {
        if (le>=ri) return ;
        int mid=(le+ri)/2;
        mergeSort(nums, le, mid);
        mergeSort(nums, mid+1, ri);

        merge(nums, le, mid, ri);
    }

    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        tmp.resize(n, 0);
        mergeSort(nums, 0, n-1);
        return cnt;
    }
};

int main(int argc, char const *argv[])
{
    Solution a;
    vector<int> v{7,5,6,4};
    cout << a.reversePairs(v) << endl;
    return 0;
}

// https://leetcode-cn.com/problems/shu-zu-zhong-de-ni-xu-dui-lcof/submissions/