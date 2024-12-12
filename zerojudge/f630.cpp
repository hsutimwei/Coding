/********************************************************************************************
 *
 *                                      這是學科決賽題
 *                                      最難的地方是用bitset
 *                                      用bitset就簡單到我也能寫出來
 ********************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n, m, a;
    while (cin >> n)
    {
        bitset<3000> bs[n];
        for (int i = 0; i < n; i++)
        {
            cin >> m;
            for (int j = 0; j < m; j++)
            {
                cin >> a;
                bs[i][a] = true;
            }
        }
        long long cnt=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1 ;j < n; j++)
            {

                if((bs[i]&bs[j]).any())
                    cnt++;
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}