#include <bits/stdc++.h>
#define ll long long int
using namespace std;
class Edge
{
public:
    int u, v;
    ll c;

    Edge(int u, int v, ll c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

const int N = 1005;
const ll INF = 1e18;
ll dis[N];
int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> EdgeList;
    for (int i = 0; i < e; i++)
    {
        int u, v;
        ll c;
        cin >> u >> v >> c;
        EdgeList.push_back(Edge(u, v, c));
    }
    int src;
    cin >> src;
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INF;
    }
    dis[src] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (Edge ed : EdgeList)
        {
            int u, v;
            ll c;
            u = ed.u;
            v = ed.v;
            c = ed.c;
            if (dis[u] < INF && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }
    bool cycle = false;
    for (Edge ed : EdgeList)
    {
        int u, v;
        ll c;
        u = ed.u;
        v = ed.v;
        c = ed.c;
        if (dis[u] < INF && dis[u] + c < dis[v])
        {
            cycle = true;
            break;
        }
    }
    if (cycle)
    {
        cout << "Negative Cycle Detected"<< endl;
    }
    else{

        int t;
        cin>>t;
        while (t--)
        {
            int des;
            cin>>des;
            if (dis[des] == INF)
            {
                cout<<"Not Possible"<<endl;
            }
            else
            {
                cout << dis[des] << endl;
            }
        }
    }   
    return 0;
}