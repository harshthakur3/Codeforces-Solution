#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for(int i = 0 ; i < n ; i++){
            cin >> v[i];
            //v[i] = k - v[i]%k;
        }
        sort(v.begin(), v.end());
        map<long long int ,long long  int> mp;
        for(int i = 0 ; i < n ; i++){
            if(v[i]%k) mp[k - v[i]%k]++;
            //mp[v[i]]++;
        }
        long long int ans = 0;
        for(auto& x : mp) {
            ans = max(ans, x.first + (x.second - 1) * k);
        }
        if(ans) ans++;
        cout << ans << endl;
    }
}