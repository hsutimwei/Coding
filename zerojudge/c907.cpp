/********************************************************************************************
 *
 *
 *
 *
 ********************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    long long n, a, maxarea = 0;
    cin >> n;
    stack<pair<long long, long long>> st;
    pair<long long, long long> p;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        
        if (!st.empty() && st.top().first > a)
        {   
            long long pos;
            
            while (!st.empty() && st.top().first > a)
            {
                pos=st.top().second;
                maxarea = max(maxarea, st.top().first * (i - pos));
                st.pop();
            }
            p.first=a;
            p.second=pos;
            st.push(p);
        }
        else
        {
            p.first = a;
            p.second = i;
            st.push(p);
        }
    }
    while (!st.empty())
    {   
        maxarea = max(maxarea, st.top().first * (n - st.top().second));
        st.pop();
    }
    cout << maxarea << endl;
    return 0;
}