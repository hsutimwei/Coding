/********************************************************************************************
*                              ÀY¦³ÂIµh..
*                              
*                              
*                              
********************************************************************************************/
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

const long long INF=9223372036854775807;

long long n,m,a;

double w[1005],v[1005];
double y[1005];


bool check(double value)
{   
    double sum=0;
    
    for(int i=0;i<n;i++)
    {
        y[i]=v[i]-w[i]*value;
    }
    sort(y,y+n);
    for(int i=0;i<a;i++)
    {
        sum+=y[n-i-1];
    }
    return sum>=0;
}


int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    while(cin >> n >> m)
    {
        for(int i=0;i<n;i++)
        {
            cin >> w[i] >> v[i];
        }
        
        for(int i=0;i<m;i++)
        {
            cin >> a;
            double left=0,right=INF;
            double mid;
            while(left+0.0001<=right)
            {
                mid=(left+right)/2;
                if(check(mid))
                    left=mid;
                else
                    right=mid;
            }
            cout << fixed << setprecision(2) << left << '\n';
        }
    }

    return 0;

}