/********************************************************************************************
*                              
*                              莫名其妙，不知道為啥d221會過。
*                               我的卻不會過
*                              
********************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    long long n,a;
    cin >> n;
        
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
    
    

    return 0;

}