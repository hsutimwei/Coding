/********************************************************************************************
*                              
*                              
*                              
*                              
********************************************************************************************/
#include <iostream>
#include <cstdint>
using namespace std;

const int64_t INF{9223372036854775807};

int64_t n;

void solve()
{   
    int c;
    cin >> c;
    int a=(c+1)/2,b=0;
    
    for(long long i = 0; i < c; i++)
    {   
        if(i%2)
        {
            a=a+b;
            cout << a << " ";
        }
        else
        {
            a=a-b;
            cout << a << " ";
        }
        b++;
    }
    cout << "\n";
}

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    cin >> n;
    while(n--)
    {
        solve();
    }

    return 0;

}