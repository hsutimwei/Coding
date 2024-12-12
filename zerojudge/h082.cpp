/********************************************************************************************
*                                       
*                              注意是一行一行執行，沒有平行
*                            
*                              
********************************************************************************************/
#include <bits/stdc++.h>
using namespace std;
class participant
{
public:
    long long S;
    long long T;
    int loss;
    int index;
};
void dfs(vector<participant> &contest,vector<long long> &pp,long long n,long long m)
{  
    if(pp.size()==1)
    {
        cout << pp[0] << endl;
        return;
    }
    vector<long long>win,lose;
    long long nn=n;
    for(int i=0;i<n;i+=2)
    {   
        if(i==n-1 && n%2==1)
        {
            win.push_back(pp[i]);
            break;
        }
        participant &a=contest[pp[i]-1],&b=contest[pp[i+1]-1];
        if(a.S*a.T>=b.S*b.T)
        {   
            long long S=a.S,T=a.T;
            a.S=S+b.S*b.T/(2*T);
            a.T=T+b.S*b.T/(2*S);
            b.S=b.S+b.S/2;
            b.T=b.T+b.T/2;
            b.loss++;
            win.push_back(a.index);
            if(b.loss!=m)
                lose.push_back(b.index);
            else
                nn--;
        }
        else
        {
            long long S=b.S,T=b.T;
            b.S=S+a.S*a.T/(2*T);
            b.T=T+a.S*a.T/(2*S);
            a.S=a.S+a.S/2;
            a.T=a.T+a.T/2;
            a.loss++;
            win.push_back(b.index);
            if(a.loss!=m)
                lose.push_back(a.index);
            else
                nn--;
        }
    }
    pp.clear();
    pp.insert(pp.begin(),win.begin(),win.end());
    pp.insert(pp.end(),lose.begin(),lose.end());
    dfs(contest,pp,nn,m);
    return;
}
int  main()
{
      //ios::sync_with_stdio(false);
     //cin.tie(0);
    long long n,m,a;
    cin >> n >> m;
    vector<participant> contest;
    participant p;
    for(int i=0;i<n;i++)
    {
        cin >> p.S;
        p.index=i+1;
        p.loss=0;
        contest.push_back(p);
    }
    for(int i=0;i<n;i++)
    {
        cin >> contest[i].T;
    }
    vector<long long> pp;
    for(int i=0;i<n;i++)
    {
        cin >> a;
        pp.push_back(a);
    }
    
    dfs(contest,pp,n,m);
    return 0;
    
}