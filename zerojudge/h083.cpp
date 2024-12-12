/********************************************************************************************
*                                       
*                           .....set和string練習。
*                            語法上有點複雜
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
    string s;
    set<string> o;
    while(n--)
    {
        cin >> s;
        o.insert(s);

    }
    int i=0,sum=0;
    for(set<string>:: iterator it=o.begin();it!=o.end();it++)
    {
        string a,b,c;
        string s=*it;
        for(i=1;i*2<=s.size();i++)
        {
            a=s.substr(0,i);
            b=s.substr(s.size()-i,i);
            if(a==b)
            {   
                c=s.substr(i,s.size()-i*2);
                if(o.count(c)!=0)
                    sum++;
            }
        }
        
    }
    cout << sum << endl;
    return 0;
    
}