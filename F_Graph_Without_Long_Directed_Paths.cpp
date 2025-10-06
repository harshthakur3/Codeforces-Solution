#include<bits/stdc++.h>
using namespace std;

// I saw the days go by, slow and cold,
// As they roamed where I wanted to.
// Her laughter flowered under the sky,
// And I was left only to sigh.

// One journey, one brief opportunity,
// To lose myself in her gaze—
// But fate was cruel, turned aside,
// And left me here in night, not day.

// Now shadows speak of what I lost,
// The touch of pleasure, a moment's happiness.
// Regret, my chain, my whispered song—
// A love I’ve wanted all along.

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> adj[ n + 1];
    vector<pair<int, int>> v;
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int flag = true;
    vector<int> vis(n + 1, -1);
    queue<pair<int, int>> q;
    vis[1] = 0;
    q.push({1,0});
    while(!q.empty()){
        int node = q.front().first;
        int color = q.front().second;
        q.pop();
        for(auto child : adj[node]){
            if(vis[child] == vis[node]){
                flag = false;
                break;
            }
            if(vis[child] == -1){
                vis[child] = 1 - color;
                q.push({child, vis[child]});
            }
            
            
        }

    }
    if(flag == false){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
        for(int i = 0; i < v.size(); i++){
            int a = v[i].first;
            int b = v[i].second;
            if(vis[a] == 0 && vis[b] == 1){
                cout << 1;
            }
            else{
                cout << 0;
            }
        }
    }
}