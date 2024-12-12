/********************************************************************************************
*                              
*                            沒難度  
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
    string a,b,s;
    while(cin >> n)
    {   
        map<string, vector<string>> mp;
        for(int i=0;i<n;i++)
        {
            cin >> a >> b;
            mp[b].push_back(a);
        }
        cin >> s;
        vector<string> v=mp[s];
        sort(v.begin(),v.begin()+v.size());
        long long cnt=0;
        for(auto c:v)
        {
            cout << c << endl;
            cnt++;
        }
        if(cnt==0)
        {
            cout << "No" << endl;
        }
    }

    return 0;
    
}