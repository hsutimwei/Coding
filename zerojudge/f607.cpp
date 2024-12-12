/********************************************************************************************
*                                       
*                              是我蠢
*                            難度不高，比較冷門的細節
*                              
********************************************************************************************/
#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<long long,long long> a,pair<long long,long long> b)
{
    return a.second<b.second;
}

int  main()
{
      ios::sync_with_stdio(false);
     cin.tie(0);
    long long n,l;
    set<long long> s;
    while(cin >> n >> l)
    {   
        long long sum=0;
        pair<long long,long long> a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i].first >> a[i].second;
        }
        sort(a,a+n,cmp);
        long long j=0;
        s.insert(0);
        s.insert(l);
        for(int i=0;i<n;i++)
        {   
            pair<set<long long>:: iterator,bool> ss=s.insert(a[i].first),ss1,ss2;
            if(ss.second==true)
            {   
                
                ss1=ss;
                ss2=ss;
                sum+=*(++ss1.first)-*(--ss2.first);
            }
        }
        cout << sum << endl;
    }

    return 0;
    
}