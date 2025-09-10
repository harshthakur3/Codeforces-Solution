#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<vector<int>> adj;
vector<int> vis, mark;

int dfs(int node) {
    vis[node] = 1;

    for (auto child : adj[node]) {
        if (!vis[child]) {
            int i = dfs(child);
            if(i == 0){
                mark[node] += 0;
            }
            else mark[node] = 2;
        }
    }

    return mark[node];
}

signed main() {
    int n;
    cin >> n;

    adj.assign(n + 1, {});
    vis.assign(n + 1, 0);
    mark.assign(n + 1, 0);

    for (int i = 0; i < n - 1; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        adj[a].push_back(b);
        adj[b].push_back(a);

        if (c == 2) {
            mark[a] = 1;
            mark[b] = 1;
        }
    }

    dfs(1); 
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if(mark[i] == 1) count++;
    }
    cout << count << endl;
    for(int i = n; i >= 1; i--){
        if(mark[i] == 1) cout << i << " ";
    }
}
