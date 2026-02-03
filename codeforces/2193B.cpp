/********************************************************************************************
*                              
*                              
*                              
*                              
********************************************************************************************/
#include <iostream>
#include <cstdint>
#include <algorithm>
#include <vector>
using namespace std;

const int64_t INF{9223372036854775807};

int64_t n;

void solve()
{
    int t;
    cin >> t;
    vector<int> a(t);
    for(long long i = 0; i < t; i++)
    {
        cin >> a[i];
    }
    for(long long i = 0; i < t; i++)
    {
        if(a[i]!=t-i)
        {
            for(long long j = i+1; j < t; j++)
            {
                if(a[j]==t-i)
                {   
                    
                    reverse(a.begin()+i,a.begin()+j+1);
                    break;
                }
            }
            break;
        }
    }
    for(long long i = 0; i < t; i++)
    {
        cout << a[i] << " ";
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