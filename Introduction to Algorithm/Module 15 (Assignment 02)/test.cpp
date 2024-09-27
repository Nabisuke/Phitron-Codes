#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
bool vis[N][N];
int dx[4] = {0, 1, 0, -1}; // Move directions: right, down, left, up
int dy[4] = {1, 0, -1, 0};
map<pair<int, int>, pair<int, int>> par;

int n, m;
char graph[N][N];

bool valid(int ci, int cj)
{
    return (ci >= 0 && ci < n && cj >= 0 && cj < m && (graph[ci][cj] == '.' || graph[ci][cj] == 'D'));
}

void bfs(int si, int sj)
{
    vis[si][sj] = true;
    queue<pair<int, int>> q;
    q.push({si, sj});

    while (!q.empty())
    {
        pair<int, int> node = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ci = node.first + dx[i];
            int cj = node.second + dy[i];

            if (valid(ci, cj) && !vis[ci][cj])
            {
                vis[ci][cj] = true;
                q.push({ci, cj});
                par[{ci, cj}] = {node.first, node.second}; // Track the parent node
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> m;

    memset(vis, false, sizeof(vis));
    int si, sj; // Starting point ('R')
    int di, dj; // Destination point ('D')

    // Input the maze and find the positions of 'R' and 'D'
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> graph[i][j];
            if (graph[i][j] == 'R') {
                si = i;
                sj = j;
            }
            if (graph[i][j] == 'D') {
                di = i;
                dj = j;
            }
        }
    }

    // Perform BFS starting from 'R'
    bfs(si, sj);

    // Debug print for BFS result
    cout << "Visited cells after BFS:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << vis[i][j] << " ";
        }
        cout << endl;
    }

    // If the destination 'D' is reachable, backtrack to mark the path
    if (vis[di][dj])
    {
        cout << "Backtracking from destination...\n";

        int xi = di;
        int xj = dj;

        // Backtrack from 'D' to 'R', marking the path
        while (make_pair(xi, xj) != make_pair(si, sj))
        {
            int newxi = par[{xi, xj}].first;
            int newxj = par[{xi, xj}].second;

            // Debug print to see the path backtracked
            cout << "Current position: (" << xi << ", " << xj << "), Moving to: (" << newxi << ", " << newxj << ")\n";

            // Only mark 'X' if it's not the start 'R' or destination 'D'
            if (graph[xi][xj] != 'R' && graph[xi][xj] != 'D') {
                graph[xi][xj] = 'X';
            }
            
            xi = newxi;
            xj = newxj;
        }
    }
    else
    {
        cout << "No path to destination.\n";
    }

    // Output the final maze with the marked path
    cout << "Final maze:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << graph[i][j];
        }
        cout << endl;
    }

    return 0;
}
