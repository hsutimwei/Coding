/********************************************************************************************
*                             莫名奇妙          
*                              無法理解位啥會RE
*                            換另一種一樣的寫法就過了
*                              莫名奇妙
********************************************************************************************/
#include <bits/stdc++.h>

using namespace std;
bool cmp (pair<int,int>a,pair<int,int>b)
{
    return a.first < b.first;
}
int secondmax(pair<int,int>* c,int k,int n)
{
    int l=k;
    for(int i=k;i<n;i++)
    {
        if(c[l].second<c[i].second)
          l=i;
    }
    return l;
}
int  main()
{
      //ios::sync_with_stdio(false);
     //cin.tie(0);
    
    int x1,y1,x2,y2,n,a,b;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> n;
    
    pair<int,int> c[n];
    for (int i = 0; i < n; i++)
    {   cin >> a >> b;
        c[i].first=(x1-a)*(x1-a) + (y1-b)*(y1-b); //d1
        c[i].second=(x2-a)*(x2-a) + (y2-b)*(y2-b); //d2
    }
    
    int p=2147483647,k=0;
    sort(c,c+n,cmp); //sort d1

    k=secondmax(c,1,n);
    p = min(p,c[k].second);
    for (int i = 0; i < n; i++)
    {   
            
        if(k<=i)
           k=secondmax(c,k+1,n);
        if(k<n)
            p = min(p,c[i].first + c[k].second);
        else
            p = min(p,c[i].first);
        //cout << k << ' ' << p << endl;
    }
    cout << p << endl;
    

    return 0;
    
}