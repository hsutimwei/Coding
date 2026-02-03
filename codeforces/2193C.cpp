/********************************************************************************************
*                              
*                              
*                              
*                              
********************************************************************************************/
#include <iostream>
#include <cstdint>
#include <vector>
using namespace std;

const int64_t INF{9223372036854775807};

int64_t t;

void solve()
{
    int n,q,l,r;
    cin >> n >> q;
    vector<long long> a(n,0);
    vector<long long> b(n,0);
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n;i++)
        cin >> b[i];
    for(int i=n-1;i>=0;i--)
    {
        if(i==n-1)
            a[i]=max(a[i],b[i]);
        else
            a[i]=max( max(a[i],a[i+1]),b[i]);
    }
    for(long long i = 1; i < n; i++)
    {
        a[i]+=a[i-1];
    }
    for(long long i = 0; i < q; i++)
    {
        cin >> l >> r;
        if(l==1)
            cout << a[r-1] << " ";
        else
            cout << a[r-1]-a[l-2] << " ";
    }
    cout << "\n";
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