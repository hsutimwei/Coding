/********************************************************************************************
*                              
*                              輕鬆
*                              
*                              
********************************************************************************************/
#include <iostream>
#include <string>
using namespace std;

const long long INF=9223372036854775807;

long long n;

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    string s;
    while(cin >> s)
    {   
        int a=0;
        string ss="hello";
        for(int i=0;i<s.length();i++)
        {   
            if(s[i]==ss[a])
                a++;
        }

        if(a==5)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;

}