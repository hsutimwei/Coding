/********************************************************************************************
*                          In C++17    
*                          [[maybe_unused]] is used when some variables maybe unused.    
*                          Like math constants, so compiler won't generate warnings.
*                          But if there is no special reason, just remove those variables.
********************************************************************************************/
#include <iostream>
#include <cstdint>
using namespace std;

const int64_t INF{9223372036854775807};

int64_t n{1};

void solve()
{

}

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    // cin >> n;
    while(n--)
    {
        [[maybe_unused]] int m{1};
    }

    return 0;

}