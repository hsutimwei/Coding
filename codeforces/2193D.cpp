/********************************************************************************************
*                              
*                              
*                              
*                              
********************************************************************************************/
#include <algorithm>
#include <iostream>
#include <cstdint>
#include <vector>
using namespace std;

const int64_t INF{9223372036854775807};

int64_t t;

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> b(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin >> b[i];
    }
    sort(a.begin(),a.end());
    for(long long i = 1; i < n; i++)
    {
        b[i]+=b[i-1];
    }
    long long x=a.back();
    long long patr=n-1,pbtr=0;
    long long ans=0;
    for(long long i = 0; i < n; i++)
    {
        if(n>=b[i])
        {   
            ans=max(ans,a[n-b[i]]*(i+1));
        }
        else 
            break;
        
    }
    cout << ans << "\n";

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