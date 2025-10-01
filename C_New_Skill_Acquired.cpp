#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 19;

int vis[N];
vector<int> e[N];

void dfs(int u) {
    for (auto v : e[u]) {
        if (!vis[v]) {
            vis[v] = 1;
            dfs(v);
        }
    }
}

void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        int x, y;
        cin >> x >> y;
        e[x].push_back(i);
        e[y].push_back(i);
    }
    vis[0] = 1;
    dfs(0);
    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        if (vis[i]) {
            ans++;
        }
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(0);
    solve();
    return 0;
}