/********************************************************************************************
*                              
*                          睡覺    
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
    cin >> n;
    string s;
    while(n--)
    {
        cin >> s;
        stack<char> sk;
        long long len=s.length(),cnt=0;
        for(int i=0;i<len;i++)
        {
            if(s[i]=='(')
                sk.push(s[i]);
            else if(s[i]==')' && sk.size()==0)
            {
                sk.push(s[i]);
                break;
            }
            else if(s[i]==')' && sk.top()=='(')
            {
                sk.pop();
                cnt++;
            }
        }
        if(sk.size()==0)
            cout << cnt << endl;
        else
            cout << 0 << endl;
    }

    return 0;
    
}