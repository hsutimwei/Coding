/********************************************************************************************
*                              這題是1600的dp題ㄟ，我不看解答過了ㄟ
*                              基本上就是Shawn Shamsian教的內容的簡單應用
*                              完整實作還是需要練習。明顯感覺思維很卡。
*                              加油。
********************************************************************************************/
#include <iostream>
#include <cstdint>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

const int64_t INF{9223372036854775807};

int64_t t;

void solve()
{
    long long n, ax,ay,bx,by;
    cin >> n;
    cin >> ax >> ay >> bx >> by;
    vector<pair<long long, long long>> v(n);
    for(long long i = 0; i < n; i++)
    {
        cin >> v[i].first;
    }
    for(long long i = 0; i < n; i++)
    {
        cin >> v[i].second;
    }
    sort(v.begin(),v.end(),[&](pair<long,long> a,pair<long,long> b){
        return a<b;
    });

    vector<pair<long long, pair<long long,long long>>> v2;
    for(auto p:v)
    {
        if(v2.size())
        {
            if(v2.back().first==p.first)
            {
                v2.back().second.first=min(v2.back().second.first,p.second);
                v2.back().second.second=max(v2.back().second.first,p.second);
            }
            else {
                v2.push_back({p.first,{p.second,p.second}});
            }
        }
        else {
            v2.push_back({p.first,{p.second,p.second}});
        }
    }

    long long upans=0, downans=0, ans;
    pair<long long, long long> upcur{ax,ay},downcur{ax,ay};
    for(auto p:v2)
    {   
        long long uptoup=abs(upcur.first-p.first)+abs(upcur.second-p.second.first)+abs(p.second.first-p.second.second);
        long long downtoup=abs(downcur.first-p.first)+abs(downcur.second-p.second.first)+abs(p.second.first-p.second.second);
        long long uptodown=abs(upcur.first-p.first)+abs(upcur.second-p.second.second)+abs(p.second.first-p.second.second);
        long long downtodown=abs(downcur.first-p.first)+abs(downcur.second-p.second.second)+abs(p.second.first-p.second.second);
        //cout << uptoup << ' ' << uptodown << ' ' << downtoup << ' ' << downtodown << endl;
        upcur={p.first,p.second.second};
        downcur={p.first,p.second.first};
        long long tmp=upans;
        upans=min(upans+uptoup,downans+downtoup);
        downans=min(tmp+uptodown,downans+downtodown);
        //cout << upans  << ' ' << downans << endl;
        //cout << upcur.first << ' ' << upcur.second << ' ' << downcur.first << ' ' << downcur.second << endl;
    }
    ans=min(upans+abs(upcur.first-bx)+abs(upcur.second-by),
            downans+abs(downcur.first-bx)+abs(downcur.second-by));
    cout << ans << endl;
}

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;

}