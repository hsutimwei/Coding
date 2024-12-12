/********************************************************************************************
 *
 *                                      有一丟丟的挑戰
 *                                      回味string
 *                                      ok的練習
 ********************************************************************************************/
#include <bits/stdc++.h>
using namespace std;


int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    long long a, b, c, cc=0, t = 0;
    string s, kk, cha;

    cin >> a >> b;
    getchar();
    cin >> s;

    int k=s.length();
    for(int i=0;i<k;i++)
    {
        cc+=s[i]-'0';
    }
    

    while (cc > 0)
    {
        t += cc % 10;
        cc /= 10;
        if (cc == 0 && t >= 10)
        {
            cc = t;
            t = 0;
        }
    }
    if (b >= t)
    {
        c = b - t;
    }
    else
    {
        c = b + 9 - t;
    }

    set<string> myset;
    for (int i = 0; i < a; i++)
    {
        kk = s;
        char buffer[100];
        sprintf(buffer,"%lld",c);
        kk.insert(i, string(buffer));
        myset.insert(kk);
        if (c==0)
        {
            kk = s;
            kk.insert(i, "9");
            myset.insert(kk);
        }
    }
    auto it = myset.end();
    it--;
    for (auto str : myset)
    {
        if (str != *(myset.begin()) && str != *it)
        {
            cout << str << endl;
        }
    }

    return 0;
}