/********************************************************************************************
*                                   3秒即過
*                                       睡覺
*                              
*                              
********************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int  main()
{
      //ios::sync_with_stdio(false);
     //cin.tie(0);
    long long n;
    while(cin >> n)
    {   
        long long a;
        map<long long,long long> mp;
        for(int i=0;i<n;i++)
        {
            cin >> a;
            mp[a]+=1;
        }
        for(auto c:mp)
        {
            cout << c.first << ' ' << c.second << endl;
        }
    }
    

    return 0;
    
}