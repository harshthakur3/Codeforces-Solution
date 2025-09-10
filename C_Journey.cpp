#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> vis;
vector<int> leafDistances;
vector<double> leafProb;

void dfs(int u, int dist, double prob) {
    vis[u] = 1;

    int childCount = 0;
    for (int v : adj[u]) {
        if (!vis[v]) childCount++;
    }

    if (childCount == 0) {
        // It's a leaf
        leafDistances.push_back(dist);
        leafProb.push_back(prob);
        return;
    }

    for (int v : adj[u]) {
        if (!vis[v]) {
            dfs(v, dist + 1, prob / childCount);
        }
    }
}

int main() {
    int n;
    cin >> n;
    adj.assign(n + 1, {});
    vis.assign(n + 1, 0);

    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(1, 0, 1.0); 

    long double expectedValue = 0.0;
    for (int i = 0; i < (int)leafDistances.size(); i++) {
        expectedValue += leafDistances[i] * leafProb[i];
    }

    cout << fixed << setprecision(15) << expectedValue << "\n";
    return 0;
}
