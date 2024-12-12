/********************************************************************************************
*                                       
*                              輕鬆
*                            
*                              
********************************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int  main()
{
      //ios::sync_with_stdio(false);
     //cin.tie(0);
      vector<int> v2;
      int n,m;
      cin >> n >> m;
      for (int i = 0; i < n; i++)
      {    
           int c,d=0;
           for (int j = 0; j < m; j++)
           {
              cin >> c;
              if(c>d)
                 d=c;
           }
           v2.push_back(d);
      }
      int sum=0;
      for(int e:v2)
          sum+=e;
      cout << sum << endl;
      int check=0;
      for(int e:v2)
      {
           if(sum%e==0)
           {
               if(check!=0)
                cout << " ";
               cout << e;
               check++;
           }
            
      }
      if(check==0)
        cout << -1;
      
      
}
