/********************************************************************************************
*                              
*                              簡單，但題目好難懂
*                              
*                              
********************************************************************************************/
#include <iostream>
#include <algorithm>
using namespace std;

long long a[1000005];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n,m,t;
    while(cin >> n >> m)
    {
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        long long sum=0;
        for(int i=0;i<m;i++)
        {   
            cin >> t;
            long long it=lower_bound(a,a+n,t)-a;
            sum+=a[it];
        }
        cout << sum << '\n';
    }

    return 0;

}