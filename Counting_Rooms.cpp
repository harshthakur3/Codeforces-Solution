#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> mp;   
vector<vector<int>> vis;
void dfs(int r, int c){
    vis[r][c] = 1;
    int n = mp.size();
    int m = mp[0].size();
    int drow[] = {0, -1, 0, 1};
    int dcol[] = {1, 0, -1, 0};
    for(int i = 0; i < 4; i++){
        int nr = r + drow[i];
        int nc = c + dcol[i];
        if(nr >= 0 && nr < n && nc >= 0 && nc < m && mp[nr][nc] == '.' && vis[nr][nc] == 0){
            dfs(nr, nc);
        }
    }
}
int main() {
    int n, m;
    cin >> n >> m;

    mp.assign(n, vector<char>(m));
    vis.assign(n, vector<int>(m, 0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mp[i][j];
        }
    }

    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if((mp[i][j] == '.') && vis[i][j] == 0){
                count++;
                dfs(i, j);
            }
        }
    }

    cout << count;
}
