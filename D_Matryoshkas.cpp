#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        map<int,int> mp;
        for(int i = 0; i < n ; i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        vector<int> unique;
        for(auto x : mp){
            unique.push_back(x.first);
        }
        int ans = mp[unique[0]];
        for(int i = 1; i < unique.size(); i++){
            if(unique[i] - unique[i - 1] == 1){
                if(mp[unique[i]] > mp[unique[i - 1]]){
                    ans += mp[unique[i]] - mp[unique[i - 1]];
                }
            }
            else{
                ans += mp[unique[i]];
            }
        }
        cout << ans << endl;
    }
}