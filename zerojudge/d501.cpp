/********************************************************************************************
 *
 *                                  水
 *
 *
 ********************************************************************************************/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    while (cin >> n)
    {
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        if (n % 2 == 1)
            cout << "A=" << a[n / 2] << "\n";
        else
        {   
            cout << "A=";
            int cnt=0;
            for (int i = a[n / 2 - 1]; i < a[n / 2] + 1; i++)
            {   
                if(cnt==0)
                {
                    cout  << i;
                    cnt++;
                }
                else
                {
                    cout  << "B" << i;
                }
            }
            cout <<  "\n";
        }
    }

    return 0;
}