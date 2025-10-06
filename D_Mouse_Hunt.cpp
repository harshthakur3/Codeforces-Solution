#include <bits/stdc++.h>
using namespace std;
#define int long long

int n, ans = 0;
vector<int> cost, room, vis, inStack;

void dfs(int u) {
    vis[u] = 1;
    inStack[u] = 1;

    int v = room[u];
    if (!vis[v]) {
        dfs(v);
    } else if (inStack[v]) {
        int mn = cost[v];
        int cur = room[v];
        while (cur != v) {
            mn = min(mn, cost[cur]);
            cur = room[cur];
        }
        ans += mn;
    }

    inStack[u] = 0;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    cost.resize(n + 1);
    room.resize(n + 1);
    vis.assign(n + 1, 0);
    inStack.assign(n + 1, 0);

    for (int i = 1; i <= n; i++) cin >> cost[i];
    for (int i = 1; i <= n; i++) cin >> room[i];

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) dfs(i);
    }

    cout << ans << "\n";
}
