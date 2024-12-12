/********************************************************************************************
*                                       
*                              簡單
*                            
*                              
********************************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int  main()
{
      //ios::sync_with_stdio(false);
     //cin.tie(0);
    int n;
    cin >> n;
    vector<string> v;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        v.push_back(s);
    }
    int p=0;
    while(1)
    {   int check=0;
        for (int i = 0; i < n; i++)
        {   
            if(p<v[i].length())
            {
                if(65<=v[i][p] && v[i][p]<=90)
                    cout << v[i][p];
                check++;
            }
                
        }
        p++;
        if(check==0)
           break;
    }

    return 0;
    
}