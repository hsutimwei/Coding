/********************************************************************************************
*                              快忘了scanf怎麼用了喵
*                              一堆奇怪的io bug，但要研究時就找不到了QQ
*                              
*                              
********************************************************************************************/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    long long a[100005];
    while(cin >> n)
    {   
        
        for(long long i=0;i<n;i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);

        long long sum=0;
        for(long long i=0;i<n;i++)
        {
            sum+=(((i<<1)-n+1)*a[i]);
        }
        cout << sum << '\n';
    }

    return 0;

}