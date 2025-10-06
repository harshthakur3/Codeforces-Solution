#include<bits/stdc++.h>
using namespace std;
signed main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        cout << mp.size()*2 - 1 << endl;
    }
}