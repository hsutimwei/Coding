/********************************************************************************************
 *                                          map有點奇怪
 *                                          需要熟練
 *
 *
 ********************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long a, b = 0, sum = 0, bits = 0,mask=0;
    string s;
    cin >> a >> b;
    map<long long, long long> mp;
    for(int i=0;i<a;i++)
    {
        mask|=1LL<<i;
    }
    for (int i = 0; i < b; i++)
    {
        cin >> s;
        for (auto c : s)
        {
            if ('Z' >= c && c >= 'A')
                bits |= 1LL << (int)(c - 'A');
            else
                bits |= 1LL << (int)(c - 'a' + 26);
        }
        //cout << bits << endl;
        mp[bits] += 1;
        if(mp.count(mask^bits)!=0)
            sum+=mp[mask^bits];
        bits = 0;
    }
    
    cout << sum  << "\n";
    return 0;
}