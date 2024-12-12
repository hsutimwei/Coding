/********************************************************************************************
*                                       我好強                                              *
*                                                                                           *
*                                                                                           *
*                                                                                           *
********************************************************************************************/
#include <bits/stdc++.h>

using namespace std;

bool cmp (pair<int,int> a, pair<int,int> b)
{
    return a.first<b.first;
}

int main()
{    //ios::sync_with_stdio(false);
     //cin.tie(0);
    
    int n,a,b,c;
    cin >> n;
    vector<pair<int,int>> tree;
    
    while(n--)
    {
       cin >> a >> b >> c;
       tree.push_back({a*a+b*b,c});
    }
    sort(tree.begin(),tree.end(),cmp);
    int cnt=tree.size(),max1=0,big=0;
    for (int i = 0; i < cnt-1; i++)
    {   
        if(tree[i].second<tree[i+1].second)
        {
            if(tree[max1].second< tree[i+1].second)
            max1=i+1;
            

        }
        else
        {    
             big=max(big,tree[max1].second-tree[i+1].second);

        }
        //cout << max1 << ' ' << min << ' ' << big  << endl;
    }
    cout << big << endl;
    
    
     



    return 0;
}




