/********************************************************************************************
 *
 *
 *
 *
 ********************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    while (1)
    {
        long long n,a;
        cin >> n;
        if(n==0)
            break;
        while(1)
        {   
            stack<long long> st;
            long long cnt=1;
            for(int i=0;i<n;i++)
            {
                cin >> a;
                if(a==0)
                    break;
                if(!st.empty() && st.top()==a)
                {
                    st.pop();
                }
                else if(cnt==a)
                {
                    cnt++;   
                }
                else if(cnt<a)
                {
                    while(cnt<a)
                    {
                        st.push(cnt);
                        cnt++;
                    }
                    cnt++;
                }
            }
            if(a==0)
                break;
            if(st.empty())
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }

    return 0;
}