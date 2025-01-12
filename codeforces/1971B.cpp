/********************************************************************************************
*                              
*                              竟然可以用|=來當作check有沒有出現過，神奇。
*                              
*                              
********************************************************************************************/
#include <iostream>
using namespace std;

const long long INF=9223372036854775807;

long long n;

string s;

void solve()
{
    cin >> s;
    if(s.length()==1)
    {
        cout << 1 << '\n';
        return;
    }
    long long cnt=1,check=0;
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]!=s[i+1])
            cnt++;
        if(s[i]=='0' && s[i+1]=='1' && check==0)
        {
            check=1;
            cnt--;
        }
    }
    cout << cnt << '\n';
    return;
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