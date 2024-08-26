#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    queue<string> que;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if (n == 0)
        {
            cin>>s;
            que.push(s);
        }
        else if (n == 1)
        {
            if (!que.empty())
            {
                string v = que.front();
                que.pop();
                cout<<v<<endl;

            }
            else
            {
                cout<<"Invalid"<<endl;
            }
        }
    }
    
    return 0;
}