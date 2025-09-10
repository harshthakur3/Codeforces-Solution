#include <bits/stdc++.h>
using namespace std;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};
char dir[] = {'U', 'L', 'D', 'R'}; 

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<vector<pair<int, int>>> par(n, vector<pair<int, int>>(m, {-1, -1}));
    vector<vector<int>> vis(n, vector<int>(m, 0));
    pair<int, int> start, end;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 'A') start = {i, j};
            if (a[i][j] == 'B') end = {i, j};
        }
    }

    queue<pair<int, int>> q;
    q.push(start);
    vis[start.first][start.second] = 1;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                if (a[nx][ny] != '#' && !vis[nx][ny]) {
                    q.push({nx, ny});
                    vis[nx][ny] = 1;
                    par[nx][ny] = {x, y};
                }
            }
        }
    }

    if (!vis[end.first][end.second]) {
        cout << "NO\n";
    } else {
        cout << "YES\n";

        
        vector<char> path;
        pair<int, int> cur = end;
        while (cur != start) {
            pair<int, int> p = par[cur.first][cur.second];
            
            for (int i = 0; i < 4; i++) {
                if (p.first + dx[i] == cur.first && p.second + dy[i] == cur.second) {
                    path.push_back(dir[i]);
                }
            }
            cur = p;
        }

        reverse(path.begin(), path.end());
        cout << path.size() << "\n";
        for (char c : path) cout << c;
        cout << "\n";
    }
    return 0;
}
