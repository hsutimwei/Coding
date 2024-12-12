/********************************************************************************************
 *
 *                                  小detailed
 *                                  但不成問題
 *
 ********************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    string s;
    long long ans = 0;
    stack<int> st;
    while (cin >> s)
    {
        if (s == "+" || s == "-" || s == "*" || s == "/")
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            if (s == "+")
            {
                ans = a + b;
            }
            else if (s == "-")
            {
                ans = b - a;
            }
            else if (s == "*")
            {
                ans = a * b;
            }
            else if (s == "/")
            {
                ans = b / a;
            }
            st.push(ans);
        }
        else
        {
            st.push(stoi(s));
        }
    }
    cout << st.top() << endl;


return 0;
}