/********************************************************************************************
*                              
*                              關於getchar的處理需要更細膩
*                              
*                              
********************************************************************************************/
#include <iostream>
using namespace std;

const long long INF=9223372036854775807;

long long n;

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    cin >> n;
    getchar();
    while(n--)
    {
        string s,t;
        getline(cin,s);
        getline(cin,t);
        int idx=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='?')
            {
                s[i]= idx<t.length() ? t[idx] : 'a';
                idx++;
            }
            else if(idx>=t.length())
                continue;
            else if(s[i]==t[idx])
                idx++;
        }
        if(idx>=t.length())
        {
            cout << "Yes" << '\n';
            cout << s << '\n';
        }
        else
            cout << "NO" << '\n';
        
    }

    return 0;

}