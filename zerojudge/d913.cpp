/********************************************************************************************
*                                       
*                              我的直覺U秀
*                            
*                              
********************************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int  main()
{
      //ios::sync_with_stdio(false);
     //cin.tie(0);
    int a[6][7];
    for(int i=0;i<6;i++)
     for(int j=0;j<7;j++)
        cin >> a[i][j];
    int k[6]={1,2,3,4,5,6};
    do
    {   
        int check=0;
        for(int i=0;i<6;i++)
        {   int cnt=0;
            for(int j=0;j<6;j++)
              if(k[j]==a[i][j])
                cnt++;
            if(cnt==a[i][6])
               check++;
        }
        if(check==6)
        {
            printf("%d %d %d %d %d %d",k[0],k[1],k[2],k[3],k[4],k[5]);
            break;
        }
        
    } while (next_permutation(k,k+6));

    return 0;
    
}