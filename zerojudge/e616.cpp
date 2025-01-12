/********************************************************************************************
*                              
*                              輕鬆
*                              
*                              
********************************************************************************************/
#include <iostream>
#include <algorithm>
using namespace std;

const long long INF=9223372036854775807;

long long n,c;
long long a[100005];

bool check(long long value)
{   
    long long cur=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=cur)
        {
            cur=a[i]+value;
            cnt++;
        }   
    }
    return cnt>=c;
}

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);

    while(cin >> n >> c)
     {
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);

        long long left=0,right=INF,mid;
        while(left<=right)
        {
            mid=(left+right)/2;
            if(check(mid))
                left=mid+1;
            else
                right=mid-1;
        }
        cout << left-1 << '\n';
    }

    return 0;

}