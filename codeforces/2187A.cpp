/********************************************************************************************
*                 2026/2/8。當前cf分數700左右，是打完第二場。
*                  這題難度不高，但沒當場想出來。感覺需要適應要思考的coding的感覺
*                   
*                              
********************************************************************************************/
#include <algorithm>
#include <iostream>
#include <cstdint>
#include <ostream>
#include <vector>
using namespace std;

const int64_t INF{9223372036854775807};

int64_t n;

void solve()
{
    int t;
    cin >> t;
    int ma=INT_MIN,mi=INT_MAX;
    vector<int> v(t);
    for(int i=0;i<t;i++)
    {
        cin >> v[i];
        ma=max(ma,v[i]);
        mi=min(mi,v[i]);
    }
    if(is_sorted(v.begin(),v.end()))
    {
        cout << -1 << endl;
        return ;
    }
    vector<int> v2(v.begin(),v.end());
    sort(v2.begin(),v2.end());
    int ans=INT_MAX;
    for(long long i = 0; i < t; i++)
    {   
        if(v[i]!=v2[i])
            ans=min(ans,max(abs(v[i]-ma),abs(v[i]-mi)));
    }
    cout << ans << endl;
}

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    cin >> n;
    while(n--)
    {
        solve();
    }

    return 0;

}