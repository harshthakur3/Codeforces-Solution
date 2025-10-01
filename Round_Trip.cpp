#include <bits/stdc++.h>
using namespace std;
#define int long long

int n, m;
vector<vector<int>> adj;
vector<int> vis, par;
int start = -1, endd = -1;

bool dfs(int node, int parent) {
    vis[node] = 1;
    par[node] = parent;
    for (auto child : adj[node]) {
        if (child == parent) continue;
        if (!vis[child]) {
            if (dfs(child, node)) return true;
        } else {
            start = child;
            endd = node;
            return true;
        }
    }
    return false;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    adj.assign(n + 1, {});
    vis.assign(n + 1, 0);
    par.assign(n + 1, -1);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 1; i <= n; i++) {
        if (!vis[i] && dfs(i, -1)) {
            vector<int> cycle;
            cycle.push_back(start);
            for (int v = endd; v != start; v = par[v]) {
                cycle.push_back(v);
            }
            cycle.push_back(start);
            reverse(cycle.begin(), cycle.end());

            cout << cycle.size() << "\n";
            for (auto v : cycle) cout << v << " ";
            cout << "\n";
            return 0;
        }
    }

    cout << "IMPOSSIBLE\n";
}
