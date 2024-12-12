/********************************************************************************************
*                                                                                           * 
*                              學弟真的好強                                                 *
*                                  繼續加油                                                 *
*                                                                                           *
********************************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int main()
{    //ios::sync_with_stdio(false);
     //cin.tie(0);
    

    int n;
    cin >> n;
    
    string str[n];
    getchar();
    for(int i=0;i<n;i++)
     { 
        getline(cin,str[i]);
        //cout << str[i] << ' ' << "aa" << endl;
     }   
    

    int cha[26]={0};
    
    for (int i = 0; i < n; i++)
    {   
        int len=str[i].length();
        
        for (int j = 0; j < len; j++)
        {   
            if(isalpha(str[i][j]))
            {

               str[i][j]=toupper(str[i][j]);
               cha[(int)str[i][j]-65]++;

            }
            
        }
        
    }
    
    for(int i=0;i<26;i++)
    {

      int max1=0;
      for (int j = 0; j < 26; j++)
      {
          max1=max(max1,cha[j]);
          
      }
      
      if(max1==0)
      break;
      for (int j = 0; j < 26; j++)
      {
          if(cha[j]==max1)
          {
              cout << (char)(j+65) << ' ' << max1 << endl;
              cha[j]=0;

          }
          
      }
      

    }
   

    

    return 0;
}




