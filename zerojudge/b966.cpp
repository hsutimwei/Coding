/********************************************************************************************
*                              
*                              老師給的提示有點唬人，但不難
*                              有點bug但不成問題
*                              
********************************************************************************************/
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

bool cmp(pair<long long, long long> a, pair<long long, long long> b)
{
    return a.first < b.first || (a.first == b.first && a.second < b.second);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n,a,b;
    cin >> n;
    vector<pair<long long, long long>> v;
    for(int i=0;i<n;i++)
    {   
        cin >> a >> b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end(),cmp);
    long long sum=0;
    for(int i=0;i<n;i++)
    {   
        if(v[i].first==v[i].second)
            continue;
        if(i<n-1 && (v[i].second > v[i+1].first) && (v[i].second < v[i+1].second))
        {
            v[i].second=v[i+1].first;
        }
        else if(i<n-1 && (v[i].second > v[i+1].first) && (v[i].second >= v[i+1].second))
        {    
            v[i+1].second=v[i].second;
            v[i].second=v[i+1].first;
        }
        sum+=v[i].second-v[i].first;
        
    }
    cout << sum << '\n';
    return 0;

}