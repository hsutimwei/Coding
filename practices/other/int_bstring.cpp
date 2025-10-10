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

string intToBinary(int num) {
    if (num == 0) 
        return "0";
    string result;
    while (num > 0) {
        result.push_back((num & 1) + '0'); // 取最低位
        num >>= 1;
    }
    std::reverse(result.begin(), result.end()); // 反轉
    return result;
}


int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    int num = 5;
    std::string binary = std::format("{:b}", num); // b = binary
    std::cout << binary << std::endl; // 101
    return 0;

}