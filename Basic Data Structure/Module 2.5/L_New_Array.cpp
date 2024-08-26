#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    vector<int>v2(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>v2[i];
    }   
    vector<int>ans(v2);
    ans.insert(ans.begin()+n,v.begin(),v.end());
    for (int x:ans)
    {
        cout<<x<<" ";
    }
    return 0;
}