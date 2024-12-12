/********************************************************************************************
 *
 *                          cmp有點巧妙
 *
 *
 ********************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

bool cmp(long long a, long long b)
{
    string a1 = to_string(a);
    string b1 = to_string(b);
    return a1 + b1 > b1 + a1;
}

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    long long n;
    while (cin >> n && n != 0)
    {
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n, cmp);
        for (int i = 0; i < n; i++)
        {
            cout << a[i];
        }
        cout << endl;
    }

    return 0;
}