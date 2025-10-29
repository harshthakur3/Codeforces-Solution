#include<bits/stdc++.h>
using namespace std;

int drow[] = {-2, -1,  1,  2,  2,  1, -1, -2};
int dcol[] = { 1,  2,  2,  1, -1, -2, -2, -1};

int main(){
    int n;
    cin >> n;
    vector<vector<int>>v(n, vector<int>(n, -1));
    v[0][0] = 0;
    queue<pair<int, int>> q;
    q.push({0, 0});
    while(!q.empty()){
        int r = q.front().first;
        int c = q.front().second;
        q.pop();
        for(int i = 0; i < 8; i++){
            int nr = r + drow[i];
            int nc = c + dcol[i];
            if(nr >= 0 && nr < n && nc >= 0 && nc < n && v[nr][nc] == -1){
                v[nr][nc] = v[r][c] + 1;
                q.push({nr, nc});
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0 ; j < n; j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}