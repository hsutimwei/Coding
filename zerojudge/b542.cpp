/********************************************************************************************
 *
 *                                那個i跟j有點想法。
 *                                就是說看當下的j有沒有符合條件
 *
 ********************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    long long n, m;
    cin >> n >> m;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    
    for (int t = 0; t < m; t++)
    {   
        long long i = 0, j = 1, c = 0, k;
        cin >> k;
        while (j != n)
        {
            if (a[j] - a[i] < k)
                j++;
            else if (a[j] - a[i] > k)
                i++;
            else
            {
                c=1;
                break;
            }
        }
        if(c==0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}