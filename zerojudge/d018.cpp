/********************************************************************************************
*                       zrc是小我3屆，現在小我2屆的學弟:206班葉致宏。                       *
*                          看了zrc 跟naukri的d018後，我覺得我蠢得跟一坨屎一樣。             *
*                             zrc真的好強                                                   *
*                               加油                                                        *   
********************************************************************************************/

//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include<sstream>

using namespace std;




int main()
{    //ios::sync_with_stdio(false);
     //cin.tie(0);
    
    stringstream ss;
    string str;
    while(getline(cin,str))
    {
    ss<<str;
    string a;
    double sum=0;
    while(ss>>a)
    {   
       // cout << sum <<  'a' << endl;
        int len=a.length();
        int i;
        
        for(i=0;i<len;i++)
        {
            if(a[i]==':')
            break;
         
        }
      //  cout << a[i-1]%2 << 'b' << endl;

        if(a[i-1]%2==1)
        { // cout << sum<< 'f' << endl;
           double sum1=0;
           int j=i+1;
           int check=0;
           if(a[j]=='-')
           j++;
           for(  ; j<len ; j++)
           { 

             
              
              if( a[j]=='.' )
              {
                 int cnt=1;
                 
                 for( j+=1 ; j<len ; j++)
                  {     
                     double t=(double)(a[j]-48);
                   //  cout << t << 'y' << endl;
                       for (int u = cnt; u >0; u--)
                       {  
                          t/=10;
                          
                       }
                    //   cout << t << 'h' << endl;


                     sum1=sum1+t;
                     cnt++;
                  }
                  
                  //cout << sum1 << 'u' << endl;
              }
              else
              {
                   sum1=sum1*10+a[j]-48;
                   //   cout << sum1 << ' ' << 'p' << endl;

              }

              

           }

           if(check==1)
           sum-=sum1;
           else
           sum+=sum1;
             
        }
        else
        {
            double sum1=0;
            int j=i+1;
            int check=0;
             if(a[j]=='-')
           j++,check++;
           for(  ;  j<len ; j++)
           {
             

              if( a[j]=='.' )
              {  int cnt=1;
                 
                 for( j+=1 ; j<len ; j++)
                  {    
                     
                     double t=(double)(a[j]-48);
                       for (int u = cnt; u >0; u--)
                       {
                          t/=10;
                       }
                       


                     sum1=sum1+t;
                     cnt++;
                  }
                  
              }
              else
              {
                 
                   sum1=sum1*10+a[j]-48;
                  // cout << sum1 << ' ' << 'q' << endl;
              }
              
         // cout<< sum1 << 'd' << endl;
           }
            if(check==0)
           sum-=sum1;
           else
           sum+=sum1;
        }

    }
    cout << sum << endl;

    ss.clear();
    str.clear();
    
    }
    



    return 0;
    
}





