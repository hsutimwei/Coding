/********************************************************************************************
*                              
*                              難度普普，但有一咪咪複雜
*                              多多練吧
*                              
********************************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

long long n,k;

long long a[200005];

long long b[5005];

bool check(long long len)
{  
    vector<long long> v;
    long long tmp=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=len)
            tmp++;
        else if(tmp!=0)
        {
            v.push_back(tmp);
            tmp=0;
        }
    }
    if(tmp!=0)
        v.push_back(tmp);

    long long cnt=0;
    for(int i=k-1;i>=0 && v.size();i--)
    {
        if(v.back()>=b[i])
        {
            v.back()-=b[i];
            cnt++;
            if(v.back()==0)
                v.pop_back();
        }
        else
        {   
            while(v.size() && v.back()<b[i])
                v.pop_back();
            i++;
        }
    }

    return cnt==k;

}

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    while(cin >> n >> k)
    {   
        long long mx=0;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            mx=max(mx,a[i]);
        }
        for(int i=0;i<k;i++)
        {
            cin >> b[i];
        }
        long long left=0,right=mx,mid;
        while(left<=right)
        {   
            mid=(left+right)/2;
            if(!check(mid))
                right=mid-1;
            else
                left=mid+1;
        }
        cout << left-1 << '\n';
    }

    return 0;

}