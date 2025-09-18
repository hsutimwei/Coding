/********************************************************************************************
*                              
*           這真的偏難。我是指p5。原來int跟bitset的枚舉有黑科技ㄟ。
*           感覺還是位元運算不太熟練。意外可以直接枚舉，因為算複雜度肯定爆。
*                              
********************************************************************************************/
#include <iostream>
#include <cstdint>
#include <bitset>
#include <vector>
using namespace std;

const int64_t INF{9223372036854775807};

int64_t n;


int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    cin >> n;
    string X;
    cin >> X;
    string Y;
    bitset<26> bs;
    vector<bitset<26>> bs2(n,bitset<26>());


    for(auto c:X)
        bs.set(c-'a');

    int p1=0,p2=0,p3=0,p4=0,p5=0;
    
    for(long long i = 0; i < n; i++)
    {
        cin >> Y;
        
        for(auto c:Y)
            bs2[i].set(c-'a');
        if((bs&bs2[i]).none())
            p1++;
        else if((bs&bs2[i])==bs)
            p2++; 
        else if((bs&bs2[i])==bs2[i])
            p3++;
        else if((bs&bs2[i]).any())
            p4++;
            
    }
    int x=bs.to_ulong();

    for(long long i = bs.to_ullong(); i!=0; i=(i-1)&x)
    {
        bitset<26> bs5(i);
        //cout << bs5 << endl;
        int result=0;
        for(long long j = 0; j < n; j++)
        {   
            //cout << bs2[j] << ' ' << (bs5&bs2[j])  << endl;
            if((bs5&bs2[j])!=bs5 && (bs5&bs2[j])!=bs2[j] && (bs5&bs2[j]).any())
            {
                result=1;
                break;
            }
            bs5=(bs&~bs5);
            if((bs5&bs2[j])!=bs5 && (bs5&bs2[j])!=bs2[j] && (bs5&bs2[j]).any())
            {
                result=1;
                break;
            }
            
        }
        if(result==0)
            p5++;
    }


    
    cout << p1 << ' ' << p2 << ' ' << p3 << ' ' << p4 << ' ' << p5 << endl;

    return 0;

}