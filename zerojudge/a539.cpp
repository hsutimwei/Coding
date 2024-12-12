/********************************************************************************************
*                              
*                              秒殺
*                              
*                              
********************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    long long n;
    while(cin >> n)
    {   
        long long a[n],sum=0;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            for(int j=0;j<i;j++)
            {
                if(a[j]>a[i])
                    sum++;
            }
        }
        cout <<"Minimum exchange operations : " << sum << endl;
    }
    

    return 0;

}