/********************************************************************************************
 *                              沒事就開加速
 *                              這參數有點有趣
 *
 *
 ********************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<long long, long long> a, pair<long long, long long> b)
{
    if (a.first != b.first)
        return a.first < b.first;
    return a.first > b.first;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n, m;
    cin >> n;
    vector<pair<long long, long long>> v;
    long long a[n];
    long long pre[n+2];
    pre[0]=0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        pre[i+1]=a[i]+pre[i];

        v.push_back(make_pair(a[i], i));
    }
    sort(v.begin(), v.end(), cmp);
    long long l = 0, r = n-1,t=0;
    while (l != r)
    {
        for (; t < n; t++)
        {
            if(l<=v[t].second && v[t].second<=r)
                break;
        }
        if(pre[v[t].second]-pre[l]>pre[r+1]-pre[v[t].second+1])
        {
            r=v[t].second-1;
        }
        else
            l=v[t].second+1;
        t++;
    }
    cout << a[l] << "\n";

    return 0;
}