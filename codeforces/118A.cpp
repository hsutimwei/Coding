/********************************************************************************************
*                              
*                              12/22/2024到此一遊。string的function都快忘了
*                              
*                              
********************************************************************************************/
#include <iostream>
#include <string>
using namespace std;

const long long INF=9223372036854775807;

long long n;

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    string S;
    while(getline(cin,S))
    {   
        string ss="";
        for(int i=0;i<S.length();i++)
        {
            if(S[i]=='a' || S[i]=='e' || S[i]=='i' || S[i]=='o' || S[i]=='u' || S[i]=='A' || S[i]=='E' || S[i]=='I' || S[i]=='O' || S[i]=='U' || S[i]=='y' || S[i]=='Y')
                continue;
            else if(isupper(S[i]))
            {   
                ss+='.';
                ss+=tolower(S[i]);
            }
            else
            {
                ss+='.';
                ss+=S[i];
            }
            
            
        }
        cout << ss << endl;
    }

    return 0;

}