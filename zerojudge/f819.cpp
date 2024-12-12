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

      long long n,a,b,cnt=0;
      cin >> n;
      vector<long long> aa;
      while(n--)
      {
           cin >> a >> b;
           if(b>100)
           {
              aa.push_back(a);
              cnt+=(b-100)*5;
           }
           

      }
      sort(aa.begin(),aa.end());
      for(int i=0;i<aa.size();i++)
      cout << aa[i] << ' ';
      if(aa.size()>0)
      cout << endl;
      cout << cnt;
}
