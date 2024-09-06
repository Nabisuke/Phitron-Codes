#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> mat[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        if (mat[x].size() == 0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            sort(mat[x].begin(),mat[x].end());
            reverse(mat[x].begin(),mat[x].end());
            for (int i = 0; i < mat[x].size(); i++)
            {
                cout << mat[x][i] << " ";
            }
            cout<<endl;
        }
    }   
    return 0;
}