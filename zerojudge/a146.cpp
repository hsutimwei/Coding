/********************************************************************************************
 *                                      第一次實作單調隊列
 *                                      值得紀念
 *                                      這真的就是競賽題
 *                                      狂壓時間
 ********************************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int a[1000005];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n, k;
    while (cin >> n >> k)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        deque<int> dq;
        for (int i = 0; i < n; i++)
        {
            while (dq.size() && dq.front() <= i - k)
            {
                dq.pop_front();
            }
            while (dq.size() && a[dq.back()] > a[i])
            {
                dq.pop_back();
            }
            dq.push_back(i);
            if (i == k - 1)
                cout << a[dq.front()];
            if (i > k - 1)
                cout << " " << a[dq.front()];
        }
        if (k > n)
            cout << a[dq.front()];
        cout << '\n';

        deque<int> dq2;
        for (int i = 0; i < n; i++)
        {
            while (dq2.size() && dq2.front() <= i - k)
            {
                dq2.pop_front();
            }
            while (dq2.size() && a[dq2.back()] < a[i])
            {
                dq2.pop_back();
            }
            dq2.push_back(i);
            if (i == k - 1)
                cout << a[dq2.front()];
            if (i > k - 1)
                cout << " " << a[dq2.front()];
        }
        if (k > n)
            cout << a[dq2.front()];
        cout << '\n';
    }

    return 0;
}