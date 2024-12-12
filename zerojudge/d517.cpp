/********************************************************************************************
*                              
*                                       加速一下
*                                         其他都很簡單
*                              
********************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int  main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    while(cin >> n)
    {   
        map<string,long long> mp;
        string s;
        long long a=1;
        for(int i=0;i<n;i++)
        {
            cin >> s;
            if(mp.count(s)!=0)
                cout << "Old! " << mp[s] << "\n";
            else
            {
                cout << "New! " << a << "\n";
                mp[s]=a;
                a++;
            }
                
        }
    }

    return 0;
    
}