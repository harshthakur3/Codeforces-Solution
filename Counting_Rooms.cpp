#include<bits/stdc++.h>
using namespace std;
int dr[] = {-1, 0, 1, 0};
int dc[] = {0, -1, 0, 1};

void dfs(int r, int c, vector<vector<char>> &v, vector<vector<int>> &vis,int n, int m){
    for(int i = 0; i < 4; i++){
        int nr = r + dr[i];
        int nc = c + dc[i];
        if(nr >= 0 && nr < n && nc >= 0 && nc < m){
            if(vis[nr][nc] == 0 && v[nr][nc] == '.'){
                vis[nr][nc] = 1;
                dfs(nr, nc, v, vis, n, m);
            }
        }
    }
}
int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> v[i][j];
        }
    }
    vector<vector<int>> vis(n, vector<int> (m, 0));
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(v[i][j] == '.' && vis[i][j] == 0){
                vis[i][j] = 1;
                dfs(i,j,v, vis,n, m);
                count++;
            }
        }
    }
    cout << count << endl;
}