#include <bits/stdc++.h>
using namespace std;
#define int long long

int n, m;
vector<vector<char>> grid;
vector<vector<int>> comp;
vector<int> compSize;

int dr[] = {0, -1, 0, 1};
int dc[] = {-1, 0, 1, 0};

void dfs(int r, int c, int id) {
    comp[r][c] = id;
    compSize[id]++;
    for (int k = 0; k < 4; k++) {
        int nr = r + dr[k], nc = c + dc[k];
        if (nr >= 0 && nr < n && nc >= 0 && nc < m) {
            if (grid[nr][nc] == '.' && comp[nr][nc] == -1) {
                dfs(nr, nc, id);
            }
        }
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    grid.assign(n, vector<char>(m));
    comp.assign(n, vector<int>(m, -1));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    int id = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '.' && comp[i][j] == -1) {
                compSize.push_back(0);
                dfs(i, j, id);
                id++;
            }
        }
    }

    vector<vector<char>> ans(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '*') {
                // set<int> seen;
                map<int, int> seen;
                int total = 1;
                for (int k = 0; k < 4; k++) {
                    int nr = i + dr[k], nc = j + dc[k];
                    if (nr >= 0 && nr < n && nc >= 0 && nc < m) {
                        if (grid[nr][nc] == '.') {
                            int cid = comp[nr][nc];
                            if (seen[cid] == 0) {
                                seen[cid] = 1;
                                total += compSize[cid];
                            }
                        }
                    }
                }
                ans[i][j] = char('0' + (total % 10));
            } else {
                ans[i][j] = '.';
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << ans[i][j];
        }
        cout << "\n";
    }
    return 0;
}
