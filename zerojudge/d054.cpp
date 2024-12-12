/********************************************************************************************
*                              
*                              練習
*                              
*                              
********************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    long long n,a[45],m;
    cin >> n;
    a[0]=1;a[1]=1;a[2]=5;
    for(int i=3;i<45;i++)
    {
        a[i]=a[i-1]+a[i-2]*4+a[i-3]*2;
    }
    for(int i=0;i<n;i++)
    {
        cin >> m;
        cout << a[m] << endl;
    }

    return 0;

}