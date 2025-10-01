#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n, m, k;
    cin >> n >> m >> k;
    map<int, vector<int>> mp;
    vector<int> ans;
    while(k--){
        int a, b;
        cin >> a >> b;
        mp[a].push_back(b);
        if(mp[a].size() == m){
            ans.push_back(a);
        }
    }

    for(auto it : ans){
        cout << it << " ";
    }
}