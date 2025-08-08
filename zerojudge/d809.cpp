/********************************************************************************************
 *
 *                                      枚舉類練習題不難。
 *                                      很適合恢復手感。
 *
 ********************************************************************************************/
#include <iostream>
#include <cstdint>
using namespace std;

const int64_t INF{9223372036854775807};

int64_t n;

int64_t x[200], y[200];

void solve()
{
    long long max = -1;
    for (int64_t i = 0; i < n; i++)
        for (int64_t j = i + 1; j < n; j++)
            for (int64_t k = j + 1; k < n; k++)
            {
                long long a = abs(x[i] * y[j] + x[j] * y[k] + y[i] * x[k] - y[i] * x[j] - y[j] * x[k] - x[i] * y[k]);
                if (a > max)
                    max = a;
            }
    printf("%.2f\n", 0.5 * (double)max);
}

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    while (cin >> n)
    {
        for (int64_t i = 0; i < n; i++)
        {
            cin >> x[i] >> y[i];
        }
        solve();
    }

    return 0;
}