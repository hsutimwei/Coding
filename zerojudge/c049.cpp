/********************************************************************************************
*                              
*                              稍微複雜一點點
*                              
*                              
********************************************************************************************/
#include <iostream>
#include <cstdint>
using namespace std;

const int64_t INF{9223372036854775807};

int64_t n,r;

int64_t dist(int64_t a1,int64_t a2, int64_t b1, int64_t b2)
{   
    return abs(a1-b1)*abs(a1-b1)+abs(a2-b2)*abs(a2-b2);
}
void solve()
{   
    int64_t cx=n,cy=n,fullans=0,partans=0;
    for(int64_t i=0;i<n;i++)
        for(int64_t j=0;j<n;j++)
        {   
            int64_t dist1=dist(i,j,cx,cy);
            int64_t dist2=dist(i+1,j,cx,cy);
            int64_t dist3=dist(i,j+1,cx,cy);
            int64_t dist4=dist(i+1,j+1,cx,cy);
            if(4*dist1<=r*r && 4*dist2<=r*r && 4*dist3<=r*r && 4*dist4<=r*r)
                fullans++;
            else if(4*dist1<r*r || 4*dist2<r*r || 4*dist3<r*r || 4*dist4<r*r)
                partans++;
        }
    
    printf("In the case n = %lld, %lld cells contain segments of the circle.\nThere are %lld cells completely contained in the circle.\n",n,partans*4,fullans*4);
}

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    
    while(cin >> n)
    {   
        r=2*n-1;
        solve();
    }

    return 0;

}