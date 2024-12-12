/********************************************************************************************
 *
 *                            這是邁向演算法的一小步，對我來講卻是重要的一大步
 *                                          不難，卻值得紀念
 *
 ********************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    cin >> n;
    while (n--)
    {
        long long a, b;
        cin >> a;
        set<long long> myset;
        queue<long long> myqueue;
        long long  maxlen = 0;
        for (int i = 0; i < a; i++)
        {
            cin >> b;
            while (myset.count(b) > 0)
            {
                myset.erase(myqueue.front());
                myqueue.pop();
            }
            myqueue.push(b);
            myset.insert(b);
            maxlen=max(maxlen,(long long)myset.size());
        }
        cout << maxlen << endl;
    }


return 0;
}