/********************************************************************************************
*                              
*                              
*                              
*                              
********************************************************************************************/
#include <iostream>
#include <cstdint>
#include <vector>
using namespace std;

const int64_t INF{9223372036854775807};

int64_t n;

bool solve()
{
    int m;
    cin >> m;
    vector<int> a(m,0);
    //cout << m << endl;
    for(int i=0;i<m;i++)
        cin >> a[i];
    
    for(int i=1;i<m-1;i++)
        if(a[i]<a[i-1] && a[i]<a[i+1])
            return false;
    return true;

}

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    cin >> n;
    while(n--)
    {
        if(solve())
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;

}