#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,2,2,2,3,4,5,6,2,10,15,2};
    replace(v.begin(),v.end(),2,100); //replace all 2s with 100
    for (int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    auto it = find(v.begin(),v.end(),100);
    if (it == v.end())
    {
        cout<<"Not found"<<endl;
    }
    else
    {
        cout<<"Found"<<endl;
    }


    return 0;
}