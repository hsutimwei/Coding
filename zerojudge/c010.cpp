/********************************************************************************************
*                              
*                              簡單，但基礎觀念需要加強。對於insert的了解需要加強。
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
    vector<long long> v;
    while(cin >> n)
    {   
        long long l=v.size();
        for(int i=0;i<l;i++)
        {
            if(i==0 && v[0]>=n)
            {
                v.insert(v.begin(),n);
                break;
            }           
            else if(i==l-1 && v[l-1]<=n)
            {
                v.insert(v.begin()+l,n);
                break;
            }  
            else if(v[i]<=n && v[i+1]>=n)
            {
                v.insert(v.begin()+i+1,n);
                break;
            }
        }
        
        
        if(v.size()==0)
            v.insert(v.begin(),n);

        if(v.size()%2==0)
            cout << (v[v.size()/2-1]+v[v.size()/2])/2 << endl;
        else
            cout << v[v.size()/2] << endl;

    }
    

    return 0;

}