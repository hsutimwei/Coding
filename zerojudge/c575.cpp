/********************************************************************************************
*                              
*                              微難。多鍛鍊
*                              
*                              
********************************************************************************************/
#include <iostream>
#include <algorithm>
using namespace std;
long long p[50010],n,m;
bool check(long long len)
{   
    long long cur=0,cnt=0;
    for(int i=0;i<n;i++)
    {  
        if(p[i]>cur)
        {
            cur=p[i]+len;
            cnt++;
        }
    }
    return cnt<=m;
}


int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    while(cin >> n >> m)
    {   
        for(int i=0;i<n;i++)
        {
            cin >> p[i];
        }
        sort(p,p+n);
    }
    long long left=0,right=1e9,mid;
    while(left<=right)
    {   
        mid=(left+right)/2; 
        if(!check(mid))
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    cout << left << '\n';

    return 0;

}