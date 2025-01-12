/********************************************************************************************
*                              
*                              
*                              
*                              
********************************************************************************************/
#include <iostream>
#include <unordered_map>
using namespace std;

const long long INF=9223372036854775807;

long long n;

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    
    cin >> n;
    for(int i=0;i<n;i++)
    {   
        unordered_map<int,int> ma;
        int a,m,check=0;
        cin >> a;
        for(int j=0;j<a;j++)
        {
            cin >> m;
            if(check==0)
            {   
                unordered_map<int,int>::const_iterator got=ma.find(m);
                if(got==ma.end())
                    ma[m]=j;
                else if(j-got->second>1)
                {   
                   check=1;
                }
            }
            
        }
        if(check==1)
        {
            cout << "YES" << '\n';
        }
        else
            cout << "NO" << '\n';
    }

    return 0; 

}