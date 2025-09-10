#include <bits/stdc++.h>
using namespace std;

int dfs(int node, vector<int> adj[], vector<int> &vis, int cons, vector<int> &v, int m) {
    if (v[node - 1] == 1) cons++;
    else cons = 0;

    if (cons > m) return 0;

    vis[node] = 1;
    bool isLeaf = true;
    int ans = 0;

    for (auto it : adj[node]) {
        if (!vis[it]) {
            isLeaf = false;
            ans += dfs(it, adj, vis, cons, v, m);
        }
    }

    if (isLeaf) return 1;

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> adj[n + 1];
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> vis(n + 1, 0);
    cout << dfs(1, adj, vis, 0, v, m) << "\n";
}
