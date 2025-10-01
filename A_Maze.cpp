#include <bits/stdc++.h>
using namespace std;
#define int long long
int drow[] = {-1, 0, 1, 0};
int dcol[] = {0, -1, 0, 1};
// I wanna take you somewhere so you know I care
// But it's so cold, and I don't know where
// I brought you daffodils on a pretty string
// But they won't flower like they did last spring
// And I wanna kiss you, make you feel alright
// I'm just so tired to share my nights
// I wanna cry and I wanna love
// But all my tears have been used up

// ⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⢀⣠⣶⣿⣿⣿⣿⣿⣿⣶⣦⣄⠀⠀⠀⠀⣀⣤⣶⣿⣿⣿⣿⣿⣿⣶⣦⡀⠀⠀⠀
// ⠀⠀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠀⢀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⡄⠀
// ⠀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠋⠀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡄
// ⣸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣄⡈⠛⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷
// ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⠄⠈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
// ⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠋⠀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
// ⠸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠃⢀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟
// ⠀⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠁⢀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠁
// ⠀⠀⠻⣿⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⠁⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠁⠀
// ⠀⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⡀⠙⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠀⠀⠀
// ⠀⠀⠀⠀⠈⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣄⠈⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠋⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠘⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⠀⢹⣿⣿⣿⣿⣿⣿⡿⠋⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠙⠻⣿⣿⣿⣿⣿⣿⣿⡟⠀⢸⣿⣿⣿⣿⡿⠋⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⢿⣿⣿⣿⣿⠃⠀⣿⣿⣿⠟⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠻⣿⡏⠀⢰⡿⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠁⠀⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀

// And if somebody hurts you, I wanna fight
// But my hand's been broken one too many times
// So I'll use my voice, I'll be so fucking rude
// Words, they always win, but I know I'll lose
signed main(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<string> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    vector<vector<int>> flow(n, vector<int>(m, -1));
    int r = -1, c = -1;
    bool flag = false;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(v[i][j] == '.'){
                r = i;
                c = j;
                flag = true;
                break;
            }
        }
        if(flag) break;
    }

    if(r != -1){
        int counter = 0;
        function<void(int,int)> dfs = [&](int cr, int cc){
            flow[cr][cc] = counter++;
            for(int d = 0; d < 4; d++){
                int nr = cr + drow[d];
                int nc = cc + dcol[d];
                if(nr >= 0 && nr < n && nc >= 0 && nc < m){
                    if(v[nr][nc] == '.' && flow[nr][nc] == -1){
                        dfs(nr, nc);
                    }
                }
            }
        };
        dfs(r, c);
    }

    vector<pair<int, pair<int,int>>> victus;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(flow[i][j] != -1){
                victus.push_back({flow[i][j], {i, j}});
            }
        }
    }
    sort(victus.rbegin(), victus.rend());
    int take = min((int)victus.size(), (int)k);
    for(int i = 0; i < take; i++){
        int row = victus[i].second.first;
        int col = victus[i].second.second;
        v[row][col] = 'X';
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << v[i][j];
        }
        cout << '\n';
    }
    return 0;
}
