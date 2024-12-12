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
    
    set<long long> s;
    long long a[5900];
    int i=0;
    s.insert(1);
    while (i<=5842)
    {
        auto j= s.begin();
        long long ii=*j;
        s.insert(ii*2);
        s.insert(ii*3);
        s.insert(ii*5);
        s.insert(ii*7);
        a[i]=ii;
        s.erase(j);
        i++;
    }

    long long n;
    while(cin >> n && n!=0)
    {
        if(n%10==1 && n%100!=11)
            printf("The %lldst humble number is %lld.\n",n,a[n-1]);
        else if(n%10==2 && n%100!=12)
            printf("The %lldnd humble number is %lld.\n",n,a[n-1]);
        else if(n%10==3 && n%100!=13)
            printf("The %lldrd humble number is %lld.\n",n,a[n-1]);
        else
            printf("The %lldth humble number is %lld.\n",n,a[n-1]);
    }

    return 0;
    
}