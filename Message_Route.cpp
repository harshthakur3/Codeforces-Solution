#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> par(n + 1, -1);
    vector<int> vis(n + 1, 0);

    queue<int> q;
    q.push(1);
    vis[1] = 1;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (auto child : adj[node]) {
            if (!vis[child]) {
                vis[child] = 1;
                par[child] = node;
                q.push(child);
            }
        }
    }

    if (par[n] == -1) {
        cout << "IMPOSSIBLE\n";
    } else {
        vector<int> path;
        int cur = n;
        while (cur != -1) {
            path.push_back(cur);
            cur = par[cur];
        }
        reverse(path.begin(), path.end());

        cout << path.size() << "\n";
        for (auto v : path) cout << v << " ";
        cout << "\n";
    }
}
