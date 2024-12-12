/********************************************************************************************
*                                       
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
    list<string> p;
    list<string>::iterator pp;
    string s,ts;
    while(cin >> s)
    {   
        if(s=="SHOW")
            break;
        else if(s=="ADD")
        {   
            cin >> s;
            p.push_back(s);
            
        }
        else if(s=="INSERT")
        {
            cin >> s;
            cin >> ts;
            pp=find(p.begin(),p.end(),ts);
            p.insert(pp,s);
        }
        else if(s=="REMOVE")
        {   
            cin >> s;
            p.remove(s);
        }
    }
    for (pp=p.begin(); pp!=p.end(); pp++)
            cout << *pp << " ";
        cout << endl;

    return 0;
    
}