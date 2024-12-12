/********************************************************************************************
*                                       
*                              就算對於n年沒寫的我而言，還是很簡單
*                            
*                              
********************************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int  main()
{
      //ios::sync_with_stdio(false);
     //cin.tie(0);

      string n;
      
      while(cin >> n)
      {     
            if(n=="#")
               break;
            int a=next_permutation(n.begin(),n.end());
            if(a==1)
            cout << n << endl;
            else
            cout << "No Successor" << endl;
      }
    return 0;
    
}