#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 1e9 + 7;

vector<vector<int>> adj;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int tt;
    cin >> tt;

    while (tt--) {
        int n, x;
        cin >> n >> x;

        adj.clear();
        adj.resize(n + 1);

        for (int i = 1; i <= n - 1; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        if (n == 1 || adj[x].size() <= 1) {
            cout << "Ayush\n";
        } else {
            cout << ((n % 2 == 0) ? "Ayush" : "Ashish") << "\n";
        }
    }

    return 0;
}
