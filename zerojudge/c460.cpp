/********************************************************************************************
*                              原來+的優先序比<<位元移動還高
*                              原來==的優先序比|跟&還高
*                              長見識了
*                              
********************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    long long n,a,b,c,d;
    cin >> n;
    long long l[3][8]={0};
    for(int i=0;i<n;i++)
    {
        cin >> a >> b >> c >> d;
        l[a-1][(b<<2)+(c<<1)+d]++;
    }
    long long cnt=0;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            for(int k=0;k<8;k++)
            {
                if((i|j|k)==7)
                    cnt+=l[0][i]*l[1][j]*l[2][k];
            }
        }
    }
    cout << cnt << endl;
    return 0;

}