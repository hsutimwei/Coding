/********************************************************************************************
*                              
*                              極其普通
*                              但很舒服
*                              
********************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    long long n;
    cin >> n;
    set<int> s;
    for(int i=1;i<70;i++)
    {
        for(int j=i+1;j<70;j++)
        {
            for(int k=j+1;k<70;k++)
            {   
                if(i!=j && j!=k && i!=k)
                {
                    int a=i*j+j*k+k*i;
                    s.insert(a);

                }
                
            }
        }
    }

    for(auto a:s)
    {
        if(a<=n)
            n++;
        else
            break;
    }
    cout <<  n << endl;

    return 0;

}