/********************************************************************************************
*                              
*                              沒啥難度。訓練寫完一次過不用debug的能力
*                              但其實還是有debug。
*                              
********************************************************************************************/
#include <iostream>
#include <cstdint>
using namespace std;

const int64_t INF{9223372036854775807};

int64_t n,m;
int64_t a[100][100];

void solve()
{   
    int64_t ans=INF,ansx,ansy; 
    for(int64_t i{0};i<n;i++)
        for(int64_t j{0};j<m;j++)
        {
            int64_t cnt=0;
            for(int64_t i2{0};i2<n;i2++)
                for(int64_t j2{0};j2<m;j2++)
                    cnt+=a[i2][j2]*(abs(i-i2)+abs(j-j2));
            if(cnt<ans)
            {
                ans=cnt;
                ansx=i,ansy=j;
            }
                
        }
    cout << ansx+1 << ' ' << ansy+1 << '\n';
    
}

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    while(cin >> n >> m)
    {
        for(int64_t i{0};i<n;i++)
            for(int64_t j{0};j<m;j++)
                cin >> a[i][j];
        solve();
    }
    
    
    return 0;

}