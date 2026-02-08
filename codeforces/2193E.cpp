/********************************************************************************************
*                              
*                              
*                              
*                              
********************************************************************************************/
#include <iostream>
#include <cstdint>
#include <unordered_set>
#include <vector>
#include <math.h>
using namespace std;

const int64_t INF{9223372036854775807};

int64_t n;

void solve()
{
    int a,x;
    cin >> a;
    vector<int> dp(a+1,1e9);
    for(int i = 0; i < a; ++i)
    {
        cin >> x;
        dp[x]=1;
    }
    
    for(int i=1;i<=a;i++)
    {
        for(int j=i;j<=a;j+=i)
            dp[j]=min(dp[j],dp[i]+dp[j/i]);
    }
    for(int i=1;i<=a;i++)
        if(dp[i]==1e9)
            cout << -1 << ' ';
        else
            cout << dp[i] << ' ';
    cout << endl;
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