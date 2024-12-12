/********************************************************************************************
*                                   %2 可以是&1                                             *  
*                                      加油                                                 *
*                                                                                           *
*                                                                                           *
********************************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int main()
{    //ios::sync_with_stdio(false);
     //cin.tie(0);
    
    int n,m;
    cin >> n;
    vector<int> out;
    for(int i=0;i<n;i++)
    {
       cin >> m;
       out.push_back(m);

    }
    for(int i=0;i<n;i++)
    {
       if(out.at(i)%2==0)
       {
           cout << out.at(i);
           if(i!=n-1)
           cout << ' ';
           
          
       }

    }
    
    for(int i=n-1;i>=0;i--)
    {
      if(out.at(i)%2==1)
       {
           cout << out.at(i);
           if(i!=0)
           cout << ' ';
           
          
       }

    }


    return 0;
}




