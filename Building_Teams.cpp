#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n, m;
    cin >> n >> m;
    vector<int> adj[n + 1];
    while(m--){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<int> vis(n + 1, 0);
    vector<int> color(n + 1, -1);
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            queue<int>q;
            q.push(i);
            vis[i] = 1;
            color[i] = 1;
            while(!q.empty()){
                int node = q.front();
                q.pop();
                for(auto child : adj[node]){
                    if(vis[child] == 0){
                        vis[child] = 1;
                        color[child] = 1 - color[node];
                        q.push(child);
                    }
                }
            }
        }
    }
    bool flag = true;
    for(int i = 1; i <= n; i++){
        for(auto child : adj[i]){
            if(color[child] == color[i]){
                flag = false;
            }
        }
    }
    for(int i = 1; i <= n; i++){
        if(color[i] == 0) color[i] = 2;
    }
    if(flag){
        for(int i = 1; i <= n; i++){
            cout << color[i] << " ";
        }
    }
    else{
        cout << "IMPOSSIBLE";
    }
}