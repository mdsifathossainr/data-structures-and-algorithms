#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty()) 
    {
        int parent = q.front();
        q.pop();

        cout << parent << " ";

        for (int child : adj_list[parent])  
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
            }
        }
    }
}

/*
    Time Complexity: O(V + E)

    V = Number of vertices
    E = Number of edges

    Explanation:
    - Each vertex is visited exactly once.
    - Each edge is processed exactly once.

    Space Complexity: O(V)

    Explanation:
    - visited array uses O(V) space.
    - queue may store up to O(V) vertices.
*/

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;

        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    bfs(0);

    return 0;
}