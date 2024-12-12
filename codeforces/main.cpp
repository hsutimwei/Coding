#include <string>
#include <iostream>
#include <filesystem>  
#include <fstream>   
namespace fs = std::filesystem;
using namespace std;
int main()
{
    ofstream out;
    out.open("list.txt");
    for (const auto & entry : fs::directory_iterator("./"))
    {   
        string s = entry.path().filename().string();
        int a=s.rfind(".");
        if(a!=0)
            out << s.substr(0,s.rfind(".")) << endl;
        else
            out<< s << endl;
    }
        
}