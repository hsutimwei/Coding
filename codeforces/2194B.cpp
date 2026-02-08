/********************************************************************************************
*                              2026/2/8，哇賽我竟然過了
*                              想了1小時都沒想出來，去問gpt
*                              沒仔細看gpt給的答案，但瞄一眼後就有想法了
*                              然後就過了
********************************************************************************************/
#include <iostream>
#include <cstdint>
#include <vector>
using namespace std;

const int64_t INF{9223372036854775807};

int64_t n;

void solve()
{
    long long t,x,y,a;
    long long ma=INT_MIN,bank=INT_MIN,ans=0;
    cin >> t >> x >> y;
    vector<long long> v(t);
    for(int i=0;i<t;i++)
    {
        cin >> v[i];
        ans+=v[i]/x;
    }
    for(long long i = 0; i < t; i++)
    {
        bank=max(bank,(ans-v[i]/x)*y+v[i]);
    }
    cout << bank << endl;
}

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    cin >> n;
    while(n--)
    {
        solve();
    }

    return 0;

}