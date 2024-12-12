/********************************************************************************************
*                                       
*                             注意!!!!字串也可以比大小 
*                            真是太扯了
*                              
********************************************************************************************/
#include <bits/stdc++.h>

using namespace std;


bool cmp(string a,string b)
{
    string aa=a+b;
    string bb=b+a;
    return aa>bb;
}

int  main()
{
      //ios::sync_with_stdio(false);
     //cin.tie(0);
    
    int n;
    while(cin >> n)
    {
string a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
        cout << a[i];
    cout << endl;
    }
    
    
    return 0;
    
}