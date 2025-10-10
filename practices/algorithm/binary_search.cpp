/********************************************************************************************
*    哇 unsigned long long 的 0 會小於 int 的 -1，因為<=比較會做型別轉換， 
*    int變成unsigned long long ，所以-1會變成18446744073709551615，然後判定就過了。好扯。
*                              
*                              
********************************************************************************************/
#include <iostream>
#include <cstdint>
#include <vector>
#include <cassert>
using namespace std;

#define binary_search0 binary_search1

const int64_t INF{9223372036854775807};

int n;

int binary_search1(vector<int> &v,int target)
{   
    int l=0;
    int r=(int)v.size()-1;
    
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(v[(size_t)mid]<target)
            l=mid+1;
        else if(v[(size_t)mid]>target)
            r=mid-1;
        else
            return (int)mid;
    }
    return -1;
}

int binary_search2(vector<int>&v, int target)
{
    int l=0;
    int r=v.size()-1;

    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(v[mid]<target)
            l=mid+1;
        else
            r=mid-1;
    }
    return l;
}

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    vector<int> nums = {1,3,4,7,8,10};
    assert(binary_search0(nums, 0)==-1);
    assert(binary_search0(nums, 1)==0);
    assert(binary_search0(nums, 3)==1);
    assert(binary_search0(nums, 4)==2);
    assert(binary_search0(nums, 5)==-1);
    assert(binary_search0(nums, 7)==3);
    assert(binary_search0(nums, 8)==4);
    assert(binary_search0(nums, 10)==5);
    assert(binary_search0(nums, 11)==-1);
    cout << "Success!" << endl;

    return 0;

}