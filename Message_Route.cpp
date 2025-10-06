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
    vector<int> par(n + 1, -1);
    queue<int> q;
    q.push(1);
    vis[1] = 1;
    while(!q.empty()){
        int node = q.front();
        q.pop();

        for(auto child : adj[node]){
            if(vis[child] == 0){
                vis[child] = 1;
                q.push(child);
                par[child] = node;
            }
        }
    }
    if(vis[n] == 0){
        cout << "IMPOSSIBLE";
    }
    else{
        vector<int> temp;
        int r = n;
        while(r != 1){
            temp.push_back(r);
            r = par[r];
        }
        cout << temp.size() + 1 << endl << 1 << " ";
        for(int i = temp.size() - 1; i >= 0; i--){
            cout << temp[i] << " ";
        }
    }
    
}