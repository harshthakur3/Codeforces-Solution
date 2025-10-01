#include<bits/stdc++.h>
using namespace std;
#define int long long

int dr[] = {-1, 0, 1, 0};
int dc[] = {0, -1, 0, 1};

signed main(){
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    vector<vector<pair<int,int>>> par(n, vector<pair<int, int>>(m, {-1, -1}));
    vector<vector<int>> vis(n, vector<int> (m, 0));
    pair<int, int> start, end;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(v[i][j] == 'A')start = {i, j};
            if(v[i][j] == 'B')end = {i, j};
        }
    }
    queue<pair<int, int>> q;
    q.push(start);
    vis[start.first][start.second] = 1;
    while(!q.empty()){
        int r = q.front().first;
        int c = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int nr = r + dr[i];
            int nc = c + dc[i];
            if(nr >= 0 && nr < n && nc >= 0 && nc < m){
                if(vis[nr][nc] == 0 && v[nr][nc] != '#'){
                    q.push({nr, nc});
                    par[nr][nc] = {r, c};
                    vis[nr][nc] = 1;
                }
            }
        }

    }

    if(vis[end.first][end.second] == 0){
        cout << "NO" << endl;
    }
    else{
        // Reconstruct path
        string path;
        pair<int,int> cur = end;
        while(cur != start){
            pair<int,int> p = par[cur.first][cur.second];
            int pr = p.first, pc = p.second;
            int cr = cur.first, cc = cur.second;

            // Determine move from parent -> cur
            if(pr == cr - 1 && pc == cc) path.push_back('D'); // parent above -> moved down
            else if(pr == cr + 1 && pc == cc) path.push_back('U'); // parent below -> moved up
            else if(pr == cr && pc == cc - 1) path.push_back('R'); // parent left -> moved right
            else if(pr == cr && pc == cc + 1) path.push_back('L'); // parent right -> moved left
            else {
                // should not happen
            }
            cur = p;
        }
        reverse(path.begin(), path.end());

        cout << "YES\n";
        cout << path.size() << "\n";
        cout << path << "\n";
        }
    
}