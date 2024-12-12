/********************************************************************************************
*                                       
*                              不難
*                            只是有點生疏
*                              
********************************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int search(int a,int* c,int l,int r)
{    
     if(r==l || r-l==1)
     return l;
     if(c[(r+l)/2]>a)
       return search(a,c,l,(r+l)/2);
     if(c[(r+l)/2]<a)
       return search(a,c,(r+l)/2,r);
     if(c[(r+l)/2]==a)
       return (r+l)/2;
     
}

int  main()
{
      ios::sync_with_stdio(false);
     cin.tie(0);
    int n,q,a;
    while(cin >> n >> q)
    {
      int c[n];
    for(int i=0;i<n;i++)
        cin >> c[i];
    sort(c,c+n);
    for(int i=0;i<q;i++)
    {
        cin >> a;
        int p=search(a,c,0,n-1),k,j;
        //cout << "p is " << p << endl;
        for(j=p;j<n;j++)
            if(c[j]>a)
                break;
        k=j;
        cout << k%2 << "\n";
    }
    }
    
    

    return 0;
    
}