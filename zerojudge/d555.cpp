/********************************************************************************************
 *
 *                                  複製太順手，把return 0放進while裡面
 *                                  喵
 *
 ********************************************************************************************/
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

bool cmp(pair<long long, long long> a, pair<long long, long long> b)
{
    return a.first > b.first || (a.first == b.first && a.second > b.second);
}

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    long long n, a, b, cnt = 0;
    while (cin >> n)
    {
        cnt += 1;
        vector<pair<long long, long long>> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            v.push_back(make_pair(a, b));
        }
        sort(v.begin(), v.end(), cmp);
        long long maxy = -1, cnnt = 0, x = -1;
        cout << "Case " << cnt << ":\n";
        vector<pair<long long, long long>> v2;
        for (int i = 0; i < n; i++)
        {
            if (x != v[i].first && maxy < v[i].second)
            {
                maxy = v[i].second;
                x = v[i].first;
                cnnt++;
                v2.push_back(v[i]);
            }
        }

        cout << "Dominate Point: " << cnnt << '\n';
        for (auto i = v2.rbegin(); i != v2.rend(); i++)
        {
            cout << '(' << i->first << ',' << i->second << ")\n";
        }
        
    }
    return 0;
}