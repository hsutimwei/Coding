/********************************************************************************************
*                              
*                              桀桀桀桀~~
*                              
*                              
********************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    long long n;
    while(cin >> n && n>=0)
    {
        stack<int> sk;
        do
        {
            sk.push(n%3);
            n/=3;
        } while (n!=0);
        
        while(sk.size()!=0)
        {
            cout << sk.top();
            sk.pop();
        }
        cout << endl;
    }

    return 0;
    
}