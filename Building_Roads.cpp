#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define MAXN 202020
int n, m;
vector<vector<int>>adj(MAXN);
vector<bool>vis(MAXN, false);
vector<int>bridges;
void dfs(int node){
    for(auto child : adj[node]){
        if(vis[child] == false){
            vis[child] = true;
            dfs(child);
        }
    }
}
signed main(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            vis[i] = true;
            bridges.push_back(i);
            dfs(i);
        }
    }

    cout << bridges.size() - 1 << endl;
    for(int i = 0; i < bridges.size() - 1; i++){
        cout << bridges[i] << " " << bridges[ i + 1] << endl;
    }
}