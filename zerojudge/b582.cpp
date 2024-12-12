/********************************************************************************************
*                                       不知道為啥                                          *
*                                  int [1000002] 在vscode 會爛掉                            *
*                                        但....上傳就過了                                   *
*                                          呵呵                                             *
********************************************************************************************/
//#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <algorithm> 
using namespace std;

int main()
{    //ios::sync_with_stdio(false);
     //cin.tie(0);
    int n;
    cin >> n;
    
    while(n--)
    {
      int m;
      cin >> m;
      int a[1000002];
      int b[1000002];
      for(int i=0;i<m;i++)
      {
         scanf("%d%d",&a[i],&b[i]);

      }
      nth_element(a,a+m/2,a+m);
      nth_element(b,b+m/2,b+m);
      long long c=0;
      for(int i=0;i<m;i++)
      {
          c+=abs(a[m/2]-a[i]) + abs(b[m/2]-b[i]);


      }
        cout << c << '\n';
 

    }
    
     



    return 0;
}




