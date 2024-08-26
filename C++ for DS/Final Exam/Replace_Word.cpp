#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string s,x;
        cin>>s>>x;
        int pos = s.find(x);
        while (s.find(x) != -1)
        {
            s.replace(pos,x.size(),"#");
            pos = s.find(x, pos + 1);
        }
        cout<<s<<endl;
    }
    
    return 0;
}