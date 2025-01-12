/********************************************************************************************
*                              
*                              原來有count這個函數啊
*                              感覺有時候寫成solve會比較方便一點。至少不用int check
*                              
********************************************************************************************/
#include <iostream>
#include <algorithm>
using namespace std;

const long long INF=9223372036854775807;

long long n,m;
string s,r;

void solve()
{   
    cin >> m;
    getchar();
    getline(cin,s);
    getline(cin,r);
    long long cn0=count(s.begin(),s.end(),'0'),cn1=m-cn0;
    for(int i=0;i<m-1;i++)
    {   
        if(cn0 == 0 || cn1==0)
        {
            cout << "NO" << '\n';
            return;
        }
        if(r[i]=='0')
            cn1--;
        else 
            cn0--;
    }
    cout << "Yes" << '\n';
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