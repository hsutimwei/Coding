/********************************************************************************************
*                                       
*                              嗚嗚嗚嗚
*                            
*                              
********************************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int  main()
{
      //ios::sync_with_stdio(false);
     //cin.tie(0);

    int s = 1;
    set<long long>ugly_N(&s,&s+1);
    set<long long>::iterator p;
    for(int i=0;i<1500;i++){
        p=ugly_N.begin();
        ugly_N.insert(*p * 2);
        ugly_N.insert(*p * 3);
        ugly_N.insert(*p * 5);
        ugly_N.erase(p);
    }
    printf("The 1500'th ugly number is %d.",*p);
    return 0;
    
}