/********************************************************************************************
*                              
*                              
*                              
*                              
********************************************************************************************/
#include <iostream>
#include <cstdint>
using namespace std;

const int64_t INF{9223372036854775807};

int64_t n;

void solve()
{

}

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    int x=0b11000011010100000; //x的二進制表示為11000011010100000
    //都只能傳入unsigned int或unsigned long long
    cout << __builtin_ffs(x) << endl; //返回右起第一個1的位置
    cout << __builtin_clz(x) << endl; //返回左起第一個1之前0的個數
    cout << __builtin_ctz(x) << endl; //返回右起第一個1之後的0的個數
    cout << __builtin_popcount(x) << endl; //返回x的二進制表示中1的個數
    cout << __builtin_parity(x) << endl; //返回x的二進制表示中1的個數的奇偶性



/*
    以下都是copilot生出來的
    cout << __builtin_popcountll(x); //返回x的二進制表示中1的個數（適用於64位整數）
    
    cout << __builtin_parityll(x); //返回x的二進制表示中 1 的個數的奇偶性（適用於64位整數）
    cout << __builtin_ctzll(x); //返回x的後面有幾    個0（適用於64位整數）
    cout << __builtin_clzll(x); //返回x的前面有幾個0（適用於64位整數）
    cout << __builtin_ffsll(x); //返回x的最後一位1是從後向前第幾位（適用於64位整數）
    cout << __builtin_bswap16(x); //返回x的16位整數的字節序反轉
    cout << __builtin_bswap32(x); //返回x的32位整數的字節序反轉
    cout << __builtin_bswap64(x); //返回x的64位整數的字節序反轉
    cout << __builtin_expect(x, 1); //返回x的值，並且    
                                   //告訴編譯器x的值是1的概率較大
    cout << __builtin_unreachable(); //告訴編譯器這段代碼永遠不會被執行
    cout << __builtin_assume_aligned(x, 16); //告訴編譯器x的指針是對齊的，對齊方式為16字節
    cout << __builtin_prefetch(x); //告訴編譯器提前加載x的數據到高速緩存中
    cout << __builtin_prefetch(x, 0, 1); //告訴編譯器提前加載x的數據到高速緩存中，並且告訴編譯器x的數據是只讀的
    cout << __builtin_prefetch(x, 1, 1); //告訴編譯器提前加載x的數據到高速緩存中，並且告訴編譯器x的數據是可寫的

*/
    return 0;

}