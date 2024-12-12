/********************************************************************************************
*                              字串處理有點麻煩
*                              
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
    cin >> n;
    string s;
    getchar();
    //cin >> s;
    getchar();
    while(n--)
    {   
        map<string, long long> mp;
        long long cnt=0;

        while(getline(cin,s) && s!="")
        {
            mp[s]++;
            cnt++;
        }
        for(auto c:mp)
        {   
            cout << c.first << " " << fixed << setprecision(4) << (double)c.second/(double)cnt*100 << "\n";
        }

    }

    return 0;
    
}