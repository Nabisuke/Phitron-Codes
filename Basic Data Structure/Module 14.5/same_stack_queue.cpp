#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> que;
    bool flag = true;
    int n,m;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }

    cin>>m;
    for (int i = 0; i <m; i++)
    {
        int x;
        cin>>x;
        que.push(x);
    }

    if (n == m)
    {
        while (st.empty() == false)
        {
            if (st.top() != que.front())
            {
                flag = false;
                break;
            }
            else
            {
                st.pop();
                que.pop();
            }
        }
    }
    else
    {
        flag = false;
    }

    if ( flag == true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }



    return 0;
}