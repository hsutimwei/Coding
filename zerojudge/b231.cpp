/********************************************************************************************
*                              
*                              有一點點思考
*                              
*                              
********************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    long long n,a,b,cpt=0,ans=0;
    cin >> n;
    pair<int,int> p;
    priority_queue<pair<int,int>> pq;
    for(int i=0;i<n;i++)
    {
        cin >> a >> b;
        pq.push(make_pair(b,a));
    }
    for(int i=0;i<n;i++)
    {
        cpt+=pq.top().second;
        ans=max(ans,cpt+pq.top().first);
        pq.pop();
    }
    cout << ans << endl;

    return 0;

}