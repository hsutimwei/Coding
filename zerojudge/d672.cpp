/********************************************************************************************
*                                                                                           *
*                                   輸入了解不足                                            *
*                                      加油                                                 *
*                                                                                           *
********************************************************************************************/
#include <iostream>
#include <string.h>
#include <stdio.h>
//#include <bits/stdc++.h>
using namespace std;

int cnt=1;

int recheck(int a)
{  
   int b=0;

   while(a!=0)
   {
      b+=a%10;
      a=a/10;
   }
   return b;
   

}


int main()
{    //ios::sync_with_stdio(false);
     //cin.tie(0);
    char input[1010];
    while(cin.getline(input, 1009) && input[0]!='0')
    {   
        int len=strlen(input),sum=0;
        
        if(len==1)
        {  int num=(int)(input[0]-48);
           
           if(num%9==0)
           {
              
              cout << num << " is a multiple of 9 and has 9-degree " << cnt << '.'<< endl;
           }         
           else
           {
              
              cout << num << " is not a multiple of 9."<< endl;

           }
                    
        }
        else
        {
          
          for(int i=0;i<len;i++)
            {
             sum+=input[i]-48;
             
            }
          while(sum/10!=0)
          {
             sum = recheck(sum);
             cnt++;
          }

          if(sum%9==0)
           {
              for(int i=0;i<len;i++)
              cout << input[i];
              cout << " is a multiple of 9 and has 9-degree " << cnt << '.'<< endl;
           }         
           else
           {
              for(int i=0;i<len;i++)
              cout << input[i];
              cout << " is not a multiple of 9."<< endl;

           }

        }

         cnt=1;
        

    }
 
    
     
    


    return 0;
}




