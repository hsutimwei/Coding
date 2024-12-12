/********************************************************************************************
*                              
*                              
*                              
*                              
********************************************************************************************/
#include <iostream>
using namespace std;

const long long INF=9223372036854775807;

long long n,a,b,c,d;

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);

    while(cin >> a >> b >> n)
    {
        c=a/n;
        if(n*c!=a)
            c++;
        d=b/n;
        if(n*d!=b)
            d++;
        cout << c*d << '\n';
    }

    return 0;

}