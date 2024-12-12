/********************************************************************************************
 *
 *                                     少數遇到即是看著答案寫完還是只了解80%的題目
 *                                     有些細節還是沒有完全理解
 *                                     值得紀念，加油
 ********************************************************************************************/
#include <bits/stdc++.h>
using namespace std;
//int a[1000005];
int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    long long n, k, v;
    while (cin >> n >> k)
    {   
        deque<pair<int,int>> dq;
        long long pre=0,ans=0;;
        for (int i = 0; i < n; i++)
        {
            cin >> v;
            pre+=v;
            while(dq.size() && dq.front().second<i-k)
            {
                dq.pop_front();
            }
            ans=max(ans,pre-dq.front().first);
            while(dq.size() && dq.back().first>pre)
            {
                dq.pop_back();
            }
            dq.push_back(make_pair(pre,i));
        }
        cout << ans << endl;
        
    }

    return 0;
}