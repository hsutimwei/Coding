/********************************************************************************************
*                              好像哪裡怪怪的
*                              但沒差
*                              輕鬆
*                              思維值得思考
********************************************************************************************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int  main()
{
      ios::sync_with_stdio(false);
     cin.tie(0);
    set<long long> s;

    long long n,a,b;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a;
        if(a==0)
        s.insert(i);
    }
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a;
        if(a==1)
        {   
            cin >> b;
            if(s.size()!=0)
            s.erase(s.begin());
        }
        else if(a==2)
        {   
            cin >> b;
            s.insert(b);
        }
        else if(a==3)
        {   
            if(s.size()!=0)
                cout << *(s.begin()) << "\n";
            else
                cout << -1 << "\n";
        }
    }
    return 0;
    
}