/********************************************************************************************
*                                       
*                              果然我的字串還是不太熟
*                            
*                              
********************************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int  main()
{
      //ios::sync_with_stdio(false);
     //cin.tie(0);
    string s;
    cin >> s;
    int a=s.length(),b=s.length();
    string ss,sss;
    bool check=true;
    int before=0;
    for (int i = 0; i < b; i++)
    {
        if(s[i]=='+')
        {
           if(check==true)
           {
              sss.append(ss);
              ss.clear();
           }
           else
           {
              reverse(ss.begin(),ss.end());
              sss.append(ss);
              ss.clear();
           }
           check=true;
        }
        else if(s[i]=='-')
        {
           if(check==true)
           {
              sss.append(ss);
              ss.clear();
           }
           else
           {
              reverse(ss.begin(),ss.end());
              sss.append(ss);
              ss.clear();
           }
           check=false;
        }
        else
           ss.push_back(s[i]);
        
        if(i==b-1)
        {
            if(check==true)
           {
              sss.append(ss);
              ss.clear();
           }
           else
           {
              reverse(ss.begin(),ss.end());
              sss.append(ss);
              ss.clear();
           }
        }
           
           
    }
    cout << sss << endl;
    

    return 0;
    
}