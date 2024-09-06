#include <bits/stdc++.h>
using namespace std;

char graph[1001][1001];
bool vis[1001][1001];

int n, m;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

bool valid(int x, int y)
{

    if (x >= 0 && x < n && y >= 0 && y < m && graph[x][y] == '.')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int bfs(int si, int sj)
{

    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    int room_cnt = 0;
    while (!q.empty())
    {

        pair<int, int> node = q.front();
        q.pop();
        room_cnt += 1;
        int nrow = node.first;
        int ncol = node.second;

        for (int i = 0; i < 4; i++)
        {
            int ci = nrow + dx[i];
            int cj = ncol + dy[i];

            if (valid(ci, cj) && vis[ci][cj] == false)
            {
                vis[ci][cj] = true;
                q.push({ci, cj});
            }
        }
    }
    return room_cnt;
}

int main()
{

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> graph[i][j];
        }
    }
    vector<int> total_room;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (graph[i][j] == '.' && vis[i][j] == false)
            {
                int rooms = bfs(i, j);
                total_room.push_back(rooms);
            }
        }
    }
    if (total_room.size() == 0)
    {
        cout<<"0"<<endl;
    }
    else
    {
        sort(total_room.begin(),total_room.end());
        for (int i = 0; i < total_room.size(); i++)
        {
            cout << total_room[i] << " ";
        }
        cout<<endl;
    }

}