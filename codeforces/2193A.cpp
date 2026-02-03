/********************************************************************************************
*                              
*                              
*                              
*                              
********************************************************************************************/
#include <iostream>
#include <cstdint>
using namespace std;

const int64_t INF{9223372036854775807};

int64_t n,s,t,x;

void solve()
{
    cin >> n >> s >> x;
    int a=0,sum=0;
    for(long long i = 0; i < n; i++)
    {
        cin >> a;
        sum+=a;
    }
    if(s-sum>=0 && (s-sum)%x==0)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;

}