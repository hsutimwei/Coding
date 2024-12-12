/********************************************************************************************
*                              
*                              這想法有點東西
*                              
*                              
********************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    long long a,b,c,d;
    cin >> a >> b;
    priority_queue<long long,vector<long long>,greater<long long>> pq;
    for(int i=0;i<a;i++)
    {
        cin >> c;
        if(pq.size()<b)
            pq.push(c);
        else
        {
            d=pq.top();
            pq.pop();
            pq.push(d+c);
        }
    }
    for(int i=1;i<b;i++)
    {
        pq.pop();
    }
    cout << pq.top() << endl;

    return 0;

}