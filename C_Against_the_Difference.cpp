#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int T; cin >> T; while(T--)

void solve(){
    ll n;
    cin >> n;
    vector<ll> v(n+1), dp(n+1, 0);
    vector<vector<ll>> last(n+1);

    for(ll i=1; i<=n; i++){
        cin >> v[i];
        last[v[i]].push_back(i);
        dp[i] = dp[i - 1]; //default skip
        if(last[v[i]].size() >= v[i]) {
            dp[i] = max(dp[i], v[i] + dp[last[v[i]][last[v[i]].size() - v[i]] - 1]);
        }
    }
    cout << dp[n] << "\n";
}
 
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test solve();
    return 0;
}
