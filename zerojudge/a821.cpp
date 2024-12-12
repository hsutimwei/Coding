/********************************************************************************************
*                              
*                              一開始有點複雜
*                              但其實還好
*                              值得學習
********************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int  main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    long long a,b;
    while(cin >> a >> b)
    {
        string win,lose;
        set<string> s;
        map<string,set<string>> mp;
        for(int i=0;i<b;i++)
        {
            cin >> win >> lose;
            s.insert(lose);
            mp[win].insert(lose);
        }
        for(auto c:mp)
        {
            if(mp[c.first].size()==a-1 && s.find(c.first)==s.end())
            {
                cout << c.first << endl;
                break;
            }
        }
    }

    return 0;
    
}