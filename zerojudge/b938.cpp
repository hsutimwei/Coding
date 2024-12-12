/********************************************************************************************
*                                       
*                           睡覺   
*                            
*                              
********************************************************************************************/
#include <bits/stdc++.h>

using namespace std;

struct p
{
    int alive;
    int next;
};


int  main()
{
      ios::sync_with_stdio(false);
     cin.tie(0);
    int n,b,a;
    
    while (cin >> n >> b)
    {struct p c[n+1];
        
        for(int i=1;i<n;i++)
        {
            c[i].alive=1;
            c[i].next=i+1;
        }
        c[n].alive=1;
        c[n].next=0;
        for(int i=0;i<b;i++)
    {
        cin >> a;
        if(c[a].alive==1 && c[a].next!=0 && c[c[a].next].alive==1)
        {   cout << c[a].next << "\n";
            c[c[a].next].alive=0;
            c[a].next=c[c[a].next].next;
        }
        else
        {
            cout << "0u0 ...... ?" << "\n";
        }
    }
    }
    
    

    return 0;
    
}