/********************************************************************************************
*                              
*                              就是看到解答可以理解的那種
*                              但我想不出來。
*                              加油
********************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n,a,b,asum=0,bsum=0;
    cin >> n;
    priority_queue<long long,vector<long long>, greater<long long>> pq;
    for(int i=0;i<n;i++)
    {
        cin >> a >> b;
        asum+=a;
        bsum+=b;
        while(pq.size() && pq.top()<=bsum)
        {
            asum-=(pq.top()-bsum+b);
            pq.pop();
        }
        asum-=b*pq.size();
        cout << asum << "\n";
        pq.push(a+bsum);
    }

    return 0;

}