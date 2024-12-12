/********************************************************************************************
*                              
*                              難
*                              有點意思
*                              
********************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    long long n,l;
    cin >> n >> l;
    long long pos[n+2];
    long long h[n+2];
    long long cnt=0,maxh=0;
    pos[0]=0;
    h[0]=10000000000;
    for(int i=1;i<=n;i++)
    {
        cin >> pos[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin >> h[i];
    }
    pos[n+1]=l;
    h[n+1]=10000000000;
    stack<long long> spos;
    stack<long long> sh;
    spos.push(pos[0]);
    sh.push(h[0]);
    for(int i=1;i<=n;i++)
    {   
        if(pos[i]-h[i]>=spos.top() || pos[i]+h[i]<=pos[i+1])
        {
            cnt++;
            maxh=max(maxh,h[i]);
            while(1)
            {   
                if(spos.top()==0 && sh.top()==10000000000)
                    break;
                long long pp=spos.top();
                long long hh=sh.top();

                if (pp+hh<=pos[i+1])
                {
                    cnt++;
                    maxh=max(maxh,hh);
                    spos.pop();
                    sh.pop();
                }
                else
                    break;
            }
        }
        else
        {
            spos.push(pos[i]);
            sh.push(h[i]);
        }
    }
    cout << cnt << endl;
    cout << maxh << endl;
    return 0;
    
}