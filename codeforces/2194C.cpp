/********************************************************************************************
*                              寫出來啦啦啦啦啦
*                              舒服。
*                              
*                              
********************************************************************************************/
#include <iostream>
#include <bitset>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

long long t;

void solve()
{
    int n,h;
    cin >> n >> h;
    vector<bitset<26>> bs(n);
    string s;
    vector<char> ch(n);
    for(int i=0;i<h;i++)
    {
        cin >> s;
        for(int j=0;j<n;j++)
            bs[j][s[j]-'a']=1;
    }

    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {   
            bool chk=true;
            for(int j=0;j<i;j++)
            {   
                bitset<26> tmp;
                tmp.set();
                
                for(int k=j;k<n;k+=i)
                {
                    tmp&=bs[k];
                    //cout << k << ' ' << bs[k] << endl;
                }
                //cout << "temp: " << tmp << endl;
                if(tmp.none())
                {
                    chk=false;
                    break;
                }
                else {
                    for(int o=0;o<26;o++)
                        if(tmp[o]==1)
                        {
                            for(int k=j;k<n;k+=i)
                            {
                                ch[k]=o+'a';
                            }
                        }
                }
                
            }
            //cout << i  << "   " << chk << endl;
            if(chk==true)
            {
                string ss(ch.begin(),ch.end());
                cout << ss << endl;
                return;
            }

        }
    }
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