#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,5};
    v.insert(v.begin()+2,10);
    for (int x:v)
    {
       cout<<x<<" ";
    }
    cout<<endl;

    vector<int>v2={10,20,30,40,50};
    v.insert(v.begin()+2,v2.begin(),v2.end());
    for (int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    v.erase(v.begin()+3);
    for (int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    v.erase(v.begin()+2,v.begin()+7);
    for (int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;


    return 0;
}