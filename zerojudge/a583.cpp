/********************************************************************************************
*                              
*                              好久沒寫囉...
*                              c835寫不出來...
*                              
********************************************************************************************/
#include <iostream>
#include <cstdint>
#include <cmath>
#include <iomanip>
using namespace std;

const int64_t INF{9223372036854775807};

uint64_t n,m;
int64_t x[20],y[20];

void solve()
{
    for(uint64_t i=0;i<m;i++)
    {
        cin >> x[i] >> y[i];
    }
    long long min=INF;
    for(uint64_t i=0;i<m;i++)
        for(uint64_t j=i+1;j<m;j++)
        {   
            long long a=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
            if(a<min)
                min=a;
        }
    printf("%.4f\n",(double)sqrt(min));
}

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    cin >> n >> m;
    solve();

    return 0;

}