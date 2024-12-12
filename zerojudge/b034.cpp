/********************************************************************************************
*                              
*                              getline可以吃空字串-->"\n"
*                              但cin不行，遇到\n會跳過不讀
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
    getchar();
    string s;
    while(n--)
    {
        getline(cin,s);
        stack<char> sk;
        long long len=s.length();
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
                sk.pop();
            else if(s[i]=='[')
                sk.push(s[i]);
            else if(s[i]==']' && sk.size()==0)
            {
                sk.push(s[i]);
                break;
            } 
            else if(s[i]==']' && sk.top()=='[')
                sk.pop();
            else
                break;
        }
        if(sk.size()==0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
    
}