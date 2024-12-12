/********************************************************************************************
*                              好久沒寫code了。
*                              腦袋好ㄎㄧㄤ。
*                              
*                              
********************************************************************************************/
#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

int main()
{
    // ios::sync_with_stdio(false);
    //cin.tie(0);
    long long n,k;
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    
    long long length1=s1.length(),length2=s2.length();
    long long a[26]={0};
    pair<long long,char> p[length2];
    for(int i=0;i<length1;i++)
    {
        a[s1[i]-'A']=i+1;
    }

    for(int i=0;i<length2;i++)
    {
        p[i]={a[s2[i]-'A'],s2[i]};
    }
    sort(p,p+length2);
    cin >> n;
    while(n--)
    {
        cin >> k;
        cout << p[k-1].second << '\n';
    }
    return 0;

}