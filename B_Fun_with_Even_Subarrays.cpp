#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>

using namespace std;

int m, n;
vector<vector<int>> grid;
int dx[] = {0, 0, 1, -1}; 
int dy[] = {1, -1, 0, 0};


int bfs(int start_r, int start_c, int type1, int type2, vector<vector<bool>>& visited) {
    if (start_r < 0 || start_r >= m || start_c < 0 || start_c >= n || visited[start_r][start_c]) {
        return 0;
    }
    int current_type = grid[start_r][start_c];
    if (current_type != type1 && current_type != type2) {
        return 0;
    }

    int area = 0;
    queue<pair<int, int>> q;

    q.push({start_r, start_c});
    visited[start_r][start_c] = true;
    
    while (!q.empty()) {
        pair<int, int> curr = q.front();
        q.pop();
        int r = curr.first;
        int c = curr.second;
        area++;

        for (int i = 0; i < 4; ++i) {
            int nr = r + dx[i];
            int nc = c + dy[i];

            if (nr >= 0 && nr < m && nc >= 0 && nc < n && !visited[nr][nc]) {
                int neighbor_type = grid[nr][nc];
                if (neighbor_type == type1 || neighbor_type == type2) {
                    visited[nr][nc] = true;
                    q.push({nr, nc});
                }
            }
        }
    }
    return area;
}

void solve_florist_problem() {
    cin >> m >> n;
    if (m == 0 || n == 0) {
        cout << 0 << endl;
        return;
    }
    grid.assign(m, vector<int>(n));
    set<int> unique_types_set;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> grid[i][j];
            unique_types_set.insert(grid[i][j]);
        }
    }

    vector<int> unique_types(unique_types_set.begin(), unique_types_set.end());
    int max_area = 0;

    for (size_t i = 0; i < unique_types.size(); ++i) {
        for (size_t j = i; j < unique_types.size(); ++j) {
            int type1 = unique_types[i];
            int type2 = unique_types[j];
            vector<vector<bool>> visited(m, vector<bool>(n, false));
            for (int r = 0; r < m; ++r) {
                for (int c = 0; c < n; ++c) {
                    if (!visited[r][c]) {
                        int current_area = bfs(r, c, type1, type2, visited);
                        if (current_area > max_area) {
                            max_area = current_area;
                        }
                    }
                }
            }
        }
    }
    cout << max_area << endl;
}

int main() {
    solve_florist_problem();
    return 0;
}