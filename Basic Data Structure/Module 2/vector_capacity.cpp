#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    cout<<v.capacity()<<endl;
    v.push_back(15);
    cout<<v.capacity()<<endl;
    v.push_back(222);
    cout<<v.capacity()<<endl;
    v.push_back(199);
    cout<<v.capacity()<<endl;
    v.push_back(19);
    cout<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;
    //v.clear(); it clears the size to 0, but it doesn't clear the memory internally. You can still print each ondexes of the vector

    return 0;
}