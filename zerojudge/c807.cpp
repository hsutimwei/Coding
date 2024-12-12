/********************************************************************************************
*                                       
*                              練習set的用法
*                            
*                              
********************************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int  main()
{
      ios::sync_with_stdio(false);
     cin.tie(0);

    int n;
    cin >> n;
    set<long long> p;
    while(n--)
    {
        
        int a,b,c;
        cin >> a;
        if(a==1)
        {
            cin >> b;
            p.insert(b);
        }
        
        if(a==2)
        {
            cin >> b >> c;
            set<long long>::iterator d=p.lower_bound(b),e=p.lower_bound(c);
            if(e!=p.end() && *e==c)
              e++;
            p.erase(d,e);
        }
        if(p.size()==1)
        cout << 1 << " " << *(p.begin()) << "\n";
        else if(p.size()==0)
        cout << 0 << "\n";
        else
        cout << 2 << ' ' << *(p.begin()) << ' ' << *(p.rbegin()) << "\n";

    }
    return 0;
    
}