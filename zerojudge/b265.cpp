/********************************************************************************************
*                              
*                              神奇的想法
*                              to_string很讚
*                              
********************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int  main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    long long n,a[5];
    
    while(cin >> n && n!=0)
    {   
        unordered_map<string,long long> mp;
        long long max=0;
        while(n--)
        {
            cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
            sort(a,a+5);
            string s=to_string(a[0])+to_string(a[1])+to_string(a[2])+to_string(a[3])+to_string(a[4]);
            long long k= ++mp[s];
            if(max<k)
            max=k;
        }
        long long sum=0;
        for(auto c:mp)
        {
            if(c.second==max)
                sum+=max;
            //cout << c.first << endl;
        }
        cout << sum << endl;
        
    }


    return 0;
    
}