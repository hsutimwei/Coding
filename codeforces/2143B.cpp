/********************************************************************************************
*                              
*                              
*                              
*                              
********************************************************************************************/
#include <iostream>
#include <cstdint>
#include <vector>
#include <algorithm>
using namespace std;

const int64_t INF{9223372036854775807};

int64_t n;

void solve()
{
    int m1,m2;
    cin >> m1 >> m2;
    vector<long long> product(m1,0);
    vector<long long> voucher(m2,0);
    //cout << m << endl;
    for(int i=0;i<m1;i++)
        cin >> product[i];

    for(int i=0;i<m2;i++)
        cin >> voucher[i];

    sort(product.begin(),product.end(),greater<long long>());
    sort(voucher.begin(),voucher.end());


    long long ans=0,i=0,j=0;
    while(i<m1 && j<m2)
    {   
        voucher[j]--;
        if(voucher[j]==0)
        {
            j++;
            i++;
            continue;
        }
        else
            ans+=product[i];
        //cout << ans << endl;
        i++;
        
    }
    while(i<m1)
    {
        ans+=product[i];
        i++;
    }
    cout << ans << endl;


}

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    cin >> n;
    while(n--)
    {
        solve();
    }

    return 0;

}