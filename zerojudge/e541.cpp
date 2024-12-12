/********************************************************************************************
*                              
*                              ºâ»´ÃP
*                              
*                              
********************************************************************************************/
#include <iostream>
#include <algorithm>
using namespace std;

long long a[10005];

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    long long n,q,t,cnt=0;
    while(cin >> n >> q)
    {      
        cnt++;
        if(n==0 & q==0)
            break;
        printf("CASE# %lld:\n",cnt);
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        for(int i=0;i<q;i++)
        {
            cin >> t;
            long long it=lower_bound(a,a+n,t)-a;
            if(a[it]==t)
                printf("%lld found at %lld\n",t,it+1);
            else
                printf("%lld not found\n",t);
        }
    }

    return 0;

}