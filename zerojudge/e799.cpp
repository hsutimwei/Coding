/********************************************************************************************
*                              
*                              腦袋累累
*                              
*                              
********************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    long long a,b,n;
    char c;
    cin >> a >> b;
    cin >> c;
    stack<char> sk;
    while(a--)
    {   
        stack<char> sk;
        cin >> n;
        for(int i=0;i<b;i++)
        {
            if(n%2==1)
            {
                sk.push(c);
            }
            else
            {
                sk.push('.');
            }
            n/=2;
        }
        for(int i=0;i<b;i++)
        {
            cout << sk.top() << ' ';
            sk.pop();
        }
        cout << endl;
        
    }

    return 0;
    
}