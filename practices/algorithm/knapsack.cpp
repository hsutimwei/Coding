/********************************************************************************************
*                              背包問題:重量限制下最大化價值
*                              
*                              
*                              
********************************************************************************************/
#include <iostream>
using namespace std;

const long long INF=9223372036854775807;

long long N=5,W=1000;
int cost[N]={800,400,300,400,200},weight[N]={2,5,5,3,2}; //價值與重量
int dp[N+1][N+1]={0};


// kanpsack using double array and recursion
int knapsack1(int n, int w)
{   
    //if(w<0) --> return false;
    if(n==0)
        return 0;
        exit();

    if(dp[n][w])
        return dp[n][w];
    
    return dp[n][w]=max(knapsack1(n-1,w-weight[n])+cost[n],
    knapsack1(n-1,w));

    
}

void solve2()
{

}

void solve3()
{

}

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    cin >> n;
    while(n--)
    {   
        cin >> N;
        for()
    }

    return 0;

}