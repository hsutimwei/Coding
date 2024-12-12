/********************************************************************************************
*                                       
*                              
*                            ok拉
*                              
********************************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int  main()
{
      //ios::sync_with_stdio(false);
     //cin.tie(0);
    long long a,b,c,d,e=0;
    cin >> a >> b >> c >> d;
    int j[4]={0,1,2,3};
    do
    {
        if(j[0]+j[1]==a && j[3]+j[2]==b && j[0]+j[2]==c && j[1]+j[3]==d)
        {
            printf("%d %d\n%d %d",j[0],j[1],j[2],j[3]);
            e++;
            break;
        }
        
    } while (next_permutation(j,j+4));
    if(e==0)
    cout << "No solutions." << endl;
    return 0;
    
}