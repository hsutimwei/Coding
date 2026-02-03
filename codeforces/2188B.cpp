/********************************************************************************************
*                              
*                              
*                              
*                              
********************************************************************************************/
#include <iostream>
#include <cstdint>
#include <string>
using namespace std;

const int64_t INF{9223372036854775807};

int64_t n;

void solve()
{
    int a;
    cin >> a;
    string s;
    cin >> s;
    int cu=0,cnt=0;
    for(int i=0;i<a;i++)
    {
        char ch=s[i];
        if(ch=='0')
            cu++;
        else
        {
            if(cu==3)
                cnt++;
            if(cu==2 && i==2)
                cnt++;
            cu=0;
            cnt++;
        }
            
        if(cu==4)
        {
            cnt++;
            cu=1;
        }
        if(cu==3 && i==2)
        {
            cnt++;
            cu=1;
        }
    
    }
    if(cu>= 2)
        cnt++;
    if(cu==1 && a==1)
        cnt++;
    cout << cnt << "\n";
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