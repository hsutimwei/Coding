/********************************************************************************************
*                              
*                              難度不高
*                              
*                              
********************************************************************************************/
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

long long a[200005],n,c,sqrtc;

bool check(long long level)
{   
    long long sum=0;
    for(int i=0;i<n;i++)
    {   
        if(level>a[i])
        {              
            long long k=level-a[i];
            if(k>sqrtc+1 || sum>c)
                return true;
            else
                sum+=k*k;
            
        }
        else
            break;
    }
    return c<sum;
}

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    while(cin >> n >> c)
    {   
        sqrtc=sqrt(c);
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        long long left=0,right=1e14,mid;
        while(left<=right)
        {
            mid=(left+right)/2;
            if(check(mid))
                right=mid-1;
            else
                left=mid+1;
        }
        cout << left-1 << '\n';
    }

    return 0;

}