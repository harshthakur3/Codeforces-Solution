#include<bits/stdc++.h>
using namespace std;

#define MAXN 202020
int n, m;
vector<vector<int>>adj(MAXN);
vector<bool>vis(MAXN, false);
vector<int>bridges;

void dfs(int node){
    vis[node] = true;
    for(auto child : adj[node]){
        if(vis[child] == false){
            dfs(child);
        }
    }
}

int main(){
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);

    }

    for(int i = 1; i <= n; i++){
        if(vis[i] == false){
            bridges.push_back(i);
            dfs(i);
        }
    }

    cout << bridges.size() - 1 << endl;
    for(int i = 0; i < bridges.size() - 1; i++){
        cout << bridges[i] << " " << bridges[i + 1] << endl;
    }
    
}