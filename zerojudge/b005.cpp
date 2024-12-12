/********************************************************************************************
*                                 睡覺      
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
    int n;
    while(cin >> n)
    {
        int a[n][n],x=0,y=0,sum,cx,cy;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin >> a[i][j];
        for(int i=0;i<n;i++)
        {   int j;
            for(j=0;j<n;j++)
            {
                sum+=a[i][j];
            }
            if(sum%2!=0)
                {
                   x++;
                   cx=i+1;
                }
                sum=0;
        }
            
                
        sum=0;          
        for(int i=0;i<n;i++)
        {   int j;
            for(j=0;j<n;j++)
            {
                sum+=a[j][i];
            }
            if(sum%2!=0)
                {
                   y++;
                   cy=i+1;
                }
                sum=0;
        }
            
                
        if(x==0 && y==0)
         cout << "OK" << "\n";
        else if(x==1 && y==1)
         printf("Change bit (%d,%d)\n",cx,cy);
        else  
         cout << "Corrupt"<< "\n";
    }

    return 0;
    
}