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

      int n,b,a1,a2;
      cin >> n;
      vector<int> a;
      for(int i=0;i<n;i++)
      {
          cin >> b;
          a.push_back(b);
      }
      cin >> b;
      b=b-1;
      int lmin=a[b],rmin=a[b];
      for(int i=0;i<b;i++)
         lmin=min(lmin,a[i]);
      for(int i=b+1;i<a.size();i++)
         rmin=min(rmin,a[i]);
      while(1)
      {
          if(lmin>rmin)
          {
             if(a[b]>a[b-1])
               b--;
             else
               break;
             if(b==0)
               break;
          }
          if(lmin<rmin)
          {
             if(a[b]>a[b+1])
               b++;
             else
               break;
             if(b==a.size()-1)
               break;
          }
      }
      cout << b;
}