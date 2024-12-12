/********************************************************************************************
*                              
*                              
*                              
*                              
********************************************************************************************/
#include <iostream>
using namespace std;

const long long INF=9223372036854775807;

long long n,a,b;

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);

    while(cin >> n)
    {
        for(int i=0;i<n;i++)
        {
            cin >> a >> b;
            if(a<b || (b-a)%2!=0)
                cout << "No" << '\n';
            else
                cout << "Yes" << '\n';
        }
    }

    return 0;

}