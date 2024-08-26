#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        if (v.size() == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myStack st1;
    myStack st2;
    int n,m;
    bool flag = true;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        st1.push(x);
    }

    cin >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st2.push(x);
    }

    if (st1.size() == st2.size())
    {
        while (st1.empty() == false)
        {
            if (st1.top() != st2.top())
            {
                flag = false;
                break;
            }
            else{
                st1.pop();
                st2.pop();
            }
        }
    }
    else
    {
        flag = false;
    }

    if (flag == true)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
