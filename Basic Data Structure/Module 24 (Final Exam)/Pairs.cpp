#include <bits/stdc++.h>
using namespace std;

class cmp
{
public:
    bool operator()(pair<string,int> &a, pair<string,int> &b)
    {
        if (a.first != b.first)
        {
            return a.first < b.first;
        }
        else
        {
            return a.second > b.second;
        }
    }
};

int main() 
{
    int n;
    cin>>n;
    vector<pair<string,int>> pair(n);

    for (int i = 0; i < n; i++)
    {
        cin>>pair[i].first>>pair[i].second;
    }

    sort(pair.begin(),pair.end(),cmp());

    for (auto it: pair)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}