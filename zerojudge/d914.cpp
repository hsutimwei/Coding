/********************************************************************************************
*                              
*                         原來unordered_map的第一項不能放pair啊。
*                              
*                              
********************************************************************************************/
#include <iostream>
#include <cstdint>
using namespace std;

const int64_t INF{9223372036854775807};

int64_t n;
int x[20][20]={0};

void solve()
{   
    cin >> n;
    int a,b,c;
    for(int i=0;i<n;i++)
    {
        cin >> a >> b >> c;
        x[a][b]=c+1;
    }
    cin >> n;
    long long cnt=0;
    for(int i=0;i<n;i++)
    {
        cin >> a >> b >> c;
        if(x[a][b]!=c+1 && x[a][b]!=0)
        {
            cnt+=2;
            x[a][b]=0;
        }
        else if(x[a][b]==c+1)
        {
            x[a][b]=0;
        }
        else
        {
            x[a][b]=c+1;
        }
    }
    for(int i=1;i<=19;i++)
        for(int j=1;j<=19;j++)
            if(x[i][j]!=0)
                cnt++;  
    cout << cnt << '\n';
    
}

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    solve();

    return 0;

}