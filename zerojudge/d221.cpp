/********************************************************************************************
*                              
*                              有一點點細節。
*                              
*                              
********************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    long long n,a;
    while(1)
    {
        cin >> n;
        if(n==0)
            break;
        
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<n;i++)
        {
            cin >> a;
            pq.push(a);

        }
        long long ans=0;
        for(int i=1;i<n;i++)
        {
            int b=pq.top();
            pq.pop();
            int c=pq.top();
            pq.pop();
            ans+=b+c;
            pq.push(b+c);
        }
        cout << ans << endl;
    }
    

    return 0;

}