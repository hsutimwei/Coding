/********************************************************************************************
 *                                         有學到東西
 *
 *
 *
 ********************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n, m, a, b, ans1;
    while (cin >> n >> m)
    {
        priority_queue<long long> pq;
        int check = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            pq.push(a);
        }
        ans1 = pq.top();
        for (int i = 0; i < m; i++)
        {
            cin >> a;
            if (check == 0)
            {
                while (a && !pq.empty())
                {
                    b = pq.top();
                    pq.pop();
                    if (b <= a)
                    {
                        a-=b;
                    }
                    else
                    {   
                        pq.push(b - a);
                        a=0;
                    }
                    
                }
                if(a>0)
                    check=1;
            }
        }
        if (check == 0)
            cout << ans1 << " " << (pq.empty()?0:pq.top()) << "\n";
        else
            cout << "Oh My God" << "\n";
    }

    return 0;
}