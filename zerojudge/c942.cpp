/********************************************************************************************
*                              
*                              Â²³æ
*                              ²Ó¸`°Ú²Ó¸`
*                              
********************************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

const double INF=9223372036854775807;
const double pi=2*acos(0);
long long n,m;

double a[11];

bool check(double k)
{
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=floor(a[i]/k);
    }
    
    return sum>=m;
}

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);

    while(cin >> n >> m && n!=0 && m!=0)
     {  
        double mina=INF;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            
            a[i]=2*pi*a[i];
            mina=min(a[i],mina);
            
        }
        
        double left=0,right=mina,mid;
        while(left+0.0001<=right)
        {
            mid=(left+right)/2;
            
            if(check(mid))
            {
                left=mid;
            }
            else
            {
                right=mid;
            }
        }
        
        for(int i=0;i<n;i++)
        {
            cout << floor(a[i]/(left)) << ' ';
        }
        cout << '\n';
    }

    return 0;

}