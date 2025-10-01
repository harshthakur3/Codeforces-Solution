#include <bits/stdc++.h>
using namespace std;
#define int long long
const int INF = 1e18;

signed main() {
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, int>>> adj(n + 1);
    
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
    }

    vector<int> dist(n + 1, INF);
    dist[1] = 0;

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
    pq.push({0, 1});

    while (!pq.empty()) {
        auto [d, node] = pq.top(); pq.pop();
        if (d > dist[node]) continue;

        for (auto [child, w] : adj[node]) {
            if (dist[node] + w < dist[child]) {
                dist[child] = dist[node] + w;
                pq.push({dist[child], child});
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        if (dist[i] == INF) cout << -1 << " ";
        else cout << dist[i] << " ";
    }
}
