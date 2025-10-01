#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<string> grid;
vector<vector<int>> monster_time, player_time;
vector<vector<pair<int,int>>> parent;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
char dir[4] = {'D','U','R','L'};

bool in_bounds(int x, int y) {
    return x >= 0 && y >= 0 && x < n && y < m;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;
    grid.resize(n);
    for(int i=0;i<n;i++) cin >> grid[i];

    monster_time.assign(n, vector<int>(m, 1e9));
    player_time.assign(n, vector<int>(m, -1));
    parent.assign(n, vector<pair<int,int>>(m, {-1,-1}));

    queue<pair<int,int>> q;

    // Step 1: BFS for all monsters
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]=='M'){
                monster_time[i][j]=0;
                q.push({i,j});
            }
        }
    }
    while(!q.empty()){
        auto [x,y] = q.front(); q.pop();
        for(int k=0;k<4;k++){
            int nx=x+dx[k], ny=y+dy[k];
            if(in_bounds(nx,ny) && grid[nx][ny]!='#'){
                if(monster_time[nx][ny] > monster_time[x][y]+1){
                    monster_time[nx][ny] = monster_time[x][y]+1;
                    q.push({nx,ny});
                }
            }
        }
    }

    // Step 2: BFS for player
    pair<int,int> start, exit_cell={-1,-1};
    for(int i=0;i<n;i++) for(int j=0;j<m;j++)
        if(grid[i][j]=='A') start={i,j};

    queue<pair<int,int>> pq;
    pq.push(start);
    player_time[start.first][start.second]=0;

    while(!pq.empty()){
        auto [x,y]=pq.front(); pq.pop();

        // If at boundary, escape!
        if(x==0 || y==0 || x==n-1 || y==m-1){
            exit_cell = {x,y};
            break;
        }

        for(int k=0;k<4;k++){
            int nx=x+dx[k], ny=y+dy[k];
            if(in_bounds(nx,ny) && grid[nx][ny]!='#' && player_time[nx][ny]==-1){
                int next_time = player_time[x][y]+1;
                if(next_time < monster_time[nx][ny]){
                    player_time[nx][ny]=next_time;
                    parent[nx][ny]={x,y};
                    pq.push({nx,ny});
                }
            }
        }
    }

    // Step 3: Reconstruct path
    if(exit_cell.first==-1){
        cout<<"NO\n";
    } else {
        cout<<"YES\n";
        vector<char> path;
        pair<int,int> cur=exit_cell;
        while(cur!=start){
            auto [px,py]=parent[cur.first][cur.second];
            for(int k=0;k<4;k++){
                if(px+dx[k]==cur.first && py+dy[k]==cur.second){
                    path.push_back(dir[k]);
                }
            }
            cur={px,py};
        }
        reverse(path.begin(), path.end());
        cout<<path.size()<<"\n";
        for(char c:path) cout<<c;
        cout<<"\n";
    }
}
