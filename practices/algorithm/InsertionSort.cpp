/********************************************************************************************
*                              
*                              
*                              
*                              
********************************************************************************************/
#include <iostream>
#include <cstdint>
#include <cassert>
#include <vector>
#include <algorithm>
using namespace std;

const int64_t INF{9223372036854775807};

int64_t n;

void InsertionSort(vector<int> & arr)
{   
    int n=arr.size(),cur;
    for(int i=0;i<n;i++)
    {
        int j=i-1;
        cur=arr[i];
        while(j>=0 && arr[j]>cur)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=cur;
    }
}

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    // 測試 1：空陣列
    vector<int> test1 = {};
    InsertionSort(test1);
    assert(is_sorted(test1.begin(), test1.end()));

    // 測試 2：單一元素
    vector<int> test2 = {42};
    InsertionSort(test2);
    assert(is_sorted(test2.begin(), test2.end()));

    // 測試 3：已排序陣列
    vector<int> test3 = {1, 2, 3, 4, 5};
    InsertionSort(test3);
    assert(is_sorted(test3.begin(), test3.end()));

    // 測試 4：反向排序陣列
    vector<int> test4 = {5, 4, 3, 2, 1};
    InsertionSort(test4);
    assert(is_sorted(test4.begin(), test4.end()));

    // 測試 5：有重複元素
    vector<int> test5 = {3, 1, 2, 3, 1};
    InsertionSort(test5);
    assert(is_sorted(test5.begin(), test5.end()));

    // 測試 6：隨機順序
    vector<int> test6 = {9, -1, 0, 5, 2};
    InsertionSort(test6);
    assert(is_sorted(test6.begin(), test6.end()));

    // 測試 7：全相同元素
    vector<int> test7 = {7, 7, 7, 7};
    InsertionSort(test7);
    assert(is_sorted(test7.begin(), test7.end()));

    cout << "All tests passed!\n";

    return 0;

}