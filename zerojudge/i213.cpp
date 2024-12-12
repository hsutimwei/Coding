/********************************************************************************************
*                              
*                              喵
*                              
*                              
********************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    long long n,a;
    cin >> n;
    stack<long long> sk;
    while(n--)
    {
        cin >> a;
        if(a==1)
        {
            cin >> a;
            sk.push(a);
        }
        else if(a==2)
        {
            if(sk.size()==0)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << sk.top() << endl;
            }
        }
        else if(a==3)
        {
            if(sk.size()!=0)
            {
                sk.pop();
            }
        }
    }

    return 0;
    
}