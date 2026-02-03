/********************************************************************************************
*                              歐弄了好久
*                              解題概念很簡單，只要不硬想就很簡單
*                              但實作真的比較麻煩
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
    string a[3];
    string b[3];
    string c[3];
    for(long long i = 0; i < 3; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
        //cout <<a[i] << b[i] << c[i] << endl;
    }
    int bs[12]={0},len[3]={a[0].length(),a[1].length(),a[2].length()};
    //cout << "aa";
    for(long long i = 0; i < 12; i++)
    {
        bs[i]=-1;
        int cnt=0;
        for(long long j = 0; j < 3; j++)
        {   
            int sum1=0,sum2=0;
            for(long long k = 0; k < len[j]; k++)
            {   
                sum1+=bs[a[j][k]-'A'];
                sum2+=bs[b[j][k]-'A'];
            }
            //cout << "aa";
            if(sum1!=sum2 && c[j]=="even")
                break;
            if(sum1<=sum2 && c[j]=="up")
                break;
            if(sum1>=sum2 && c[j]=="down")
                break;
            cnt++;
        }
        if(cnt==3)
        {
            cout << (char)(i+'A') <<" is the counterfeit coin and it is light."   << endl;  
            return;
        }
        cnt=0;
        bs[i]=1;
        for(long long j = 0; j < 3; j++)
        {   
            int sum1=0,sum2=0;
            for(long long k = 0; k < len[j]; k++)
            {   
                sum1+=bs[a[j][k]-'A'];
                sum2+=bs[b[j][k]-'A'];
            }
            //cout << "aa";
            if(sum1!=sum2 && c[j]=="even")
                    break;
            if(sum1<=sum2 && c[j]=="up")
                break;
            if(sum1>=sum2 && c[j]=="down")
                break;
            cnt++;
        }
        if(cnt==3)
        {
            cout << (char)(i+'A') <<" is the counterfeit coin and it is heavy."   << endl;  
            return;
        }
        bs[i]=0;
    }
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