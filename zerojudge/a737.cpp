/********************************************************************************************
*                              簡單
*                              
*                              
*                              
********************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    long long n,m;
    cin >> n;
    while(n--)
    {   
        cin >> m;
        long long a[m];
        for(int i=0;i<m;i++)
        {
            cin >> a[i];
        }

        sort(a,a+m);
        long long mid=a[m/2],sum=0;
        for(int i=0;i<m;i++)
        {   
            sum+=abs(a[i]-mid);
        }
        cout << sum << "\n";
    }
    

    return 0;

}