#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<int> vis(n + 1, 0);
    vector<int> team(n + 1);
    queue<int> q;
    for(int i = 1; i <= n; i++){
        if(vis[i] == 0){
            q.push(i);
            vis[i] = 1;
            team[i] = 1;
            while(!q.empty()){
                int node = q.front();
                q.pop();
                for(auto child : adj[node]){
                    if(vis[child] == 0){
                        vis[child] = 1;
                        team[child] = 1 - team[node];
                        q.push(child);
                    }
                }
            }
        }
    }
  
    for(int i = 1; i <= n; i++){
        if(team[i] == 0) team[i] = 2;
    }

    bool flag = true;
    for(int i = 1; i <= n; i++){
        for(auto child : adj[i]){
            if(team[child] == team[i]) flag = false;
        }
    }
    if(flag == false){
        cout << "IMPOSSIBLE";
    }
    else{
        for(int i = 1; i <= n; i++){
            cout << team[i] << " ";
        }
    }
}