#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<string , int> mp;
        for(int i = 0; i < n; i++){
            string s;
            cin >> s;
            mp[s]++;
        }
        vector<string> v;
        for(auto it : mp){
            v.push_back(it.first);
        }
        int ans = 0;
        for(int i = 0; i < v.size(); i++){
            for(int j = i + 1; j < v.size(); j++){
                if(v[i][0] == v[j][0] || v[i][1] == v[j][1]){
                    ans += mp[v[i]]*mp[v[j]];
                }
            }
        }
        cout << ans << endl;
    }
}