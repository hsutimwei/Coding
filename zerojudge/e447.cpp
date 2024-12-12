/********************************************************************************************
*                              
*                              睡覺。
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
    queue<int> q;
    for(int i=0;i<n;i++)
    {
        cin >> a;
        if(a==1)
        {
            cin >> a;
            q.push(a);
        }
        else if(a==2)
        {
            if(!q.empty())
                cout << q.front() << endl;
            else
                cout << -1 << endl;
        }
        else 
        {   
            if(!q.empty())
                q.pop();
            
        }
    }

    return 0;

}