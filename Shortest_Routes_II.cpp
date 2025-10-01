#include <bits/stdc++.h>
using namespace std;
#define int long long
const int INF = 1e15;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, q;
    cin >> n >> m >> q;

    // distance matrix
    vector<vector<int>> dist(n+1, vector<int>(n+1, INF));

    // distance to itself = 0
    for(int i=1; i<=n; i++) dist[i][i] = 0;

    // input edges
    for(int i=0; i<m; i++){
        int a,b,c;
        cin >> a >> b >> c;
        dist[a][b] = min(dist[a][b], c); // handle multiple edges
        dist[b][a] = min(dist[b][a], c); // undirected
    }

    // Floyd-Warshall
    for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(dist[i][k] + dist[k][j] < dist[i][j]){
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    // answer queries
    while(q--){
        int u,v; cin >> u >> v;
        if(dist[u][v] == INF) cout << -1 << "\n";
        else cout << dist[u][v] << "\n";
    }
}
