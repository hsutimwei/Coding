/********************************************************************************************
*                              
*                              其實還好
*                              
*                              
********************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int  main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long a,b,cnt=0;
    cin >> a >> b;
    string ss[b];
    unordered_map<string,long long> mp;
    for(int i=0;i<a-1;i++)
    {
        cin >> ss[i];
        mp[ss[i]]++;
    }
    for(int i=a-1;i<b;i++)
    {
        cin >> ss[i];
        mp[ss[i]]++;
        if(mp.size()==a)
            cnt++;
        mp[ss[i-a+1]]--;
        if(mp[ss[i-a+1]]==0)
            mp.erase(ss[i-a+1]);
    }
    cout << cnt << "\n";

    return 0;
    
}