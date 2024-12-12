/********************************************************************************************
*                                       
*                              輕輕鬆鬆
*                               多記住STL的用法
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
    set<string> p;
    string s;
    while(n--)
    {
        cin >> s;
        p.insert(s);
    }
    cin >> n;
    while(n--)
    {
        cin >> s;
        if(p.count(s))
        cout << "yes" << endl;
        else
        {
            cout << "no" << endl;
            p.insert(s);
        }
        
    }

    return 0;
    
}