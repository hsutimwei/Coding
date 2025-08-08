/********************************************************************************************
 *
 *                                  多鍛鍊一點直覺和記憶
 *
 *
 ********************************************************************************************/
#include <iostream>
#include <cstdint>
using namespace std;

const int64_t INF{9223372036854775807};

int64_t n, m;

int64_t store1[505], store2[505], store3[505];

void solve()
{
    for (int64_t i = 2; i <= 500; i++)
        for (int64_t j = 0; j < i; j++)
            for (int64_t k = 0; k < j; k++)
                if (store3[i] + store2[j] + store1[k] == m)
                {
                    cout << i << j << k << '\n';
                    return;
                }
                else if (store3[i] + store2[j] + store1[k] > m)
                    break;
}

void store()
{   
    store1[0] = 0;
    for (int64_t i{1}; i <= 500; i++)
        store1[i] = i;
    store2[0] = 0;
    store2[1] = 0;
    for (int64_t i{2}; i <= 500; i++)
        store2[i] = store1[i - 1] + store2[i-1];
    store3[0] = 0;
    store3[1] = 0;
    store3[2] = 0;
    for (int64_t i{3}; i <= 500; i++)
        store3[i] = store2[i - 1] + store3[i-1];
}

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    store();
    while (cin >> n)
    {
        while (n--)
        {
            cin >> m;
            solve();
        }
    }

    return 0;
}