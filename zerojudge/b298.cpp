/********************************************************************************************
*                              
*                              還ok。有點繞。需要努力。
*                              
*                              
********************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    long long a,b,c,d,n,m;
    cin >> a >> b >> c >> d;
    vector<int> v[10005];
    int ma[10005]={0};
    
    for(int i=0;i<b;i++)
    {
        cin >> n >> m;
        v[n].push_back(m);
    }
    for(int i=0;i<c;i++)
    {
        cin >> n;
        if(ma[n]==-1)
            continue;
        queue<int> qu;
        qu.push(n);
        while(qu.size()!=0)
        {   
            m=qu.front();
            ma[m]=-1;
            int len=v[m].size();
            for(int j=0;j<len;j++)
            {
                int p=v[m][j];
                qu.push(p);
            }
            v[m].clear();
            qu.pop();
        }
        
    }
    for(int i=0;i<d;i++)
    {
        cin >> m;
        if(ma[m]==-1)
            cout << "TUIHUOOOOOO" << endl;
        else
            cout << "YA~~" << endl;
    }

    return 0;

}