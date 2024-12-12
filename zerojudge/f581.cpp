/********************************************************************************************
*                              
*                              二分搜有點細節
*                              發現lower_bound更好用，但為了練習還是手刻二分搜
*                              
********************************************************************************************/
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n,m,q,sum=0;
    cin >> n >> m;
    long long a[n];
    long long presum[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        sum+=a[i];
        presum[i]=sum;
    }
    
    long long now=0;

    for(int i=0;i<m;i++)
    {   
        long long low=0,mid=0,high=n-1;
        cin >> q;
        if(now!=0)
            q+=presum[now-1];
        if(q>presum[n-1])
            q-=presum[n-1];
        
        while(low<=high)
        {
            mid=(low+high)/2;
            if(presum[mid]>q)
                high=mid-1;
            else if(presum[mid]<q)
                low=mid+1;
            else
            {
                now=mid;
                break;
            }
            now=low;
        }
        
        now=(now+1)%n;
    }
    cout << now << '\n';
    
    

    return 0;

}