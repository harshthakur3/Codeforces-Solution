#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n + 3, 0); 
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
    }

    ll ans = 0;
    for (ll i = 1; i <= n - 1; i += 2) { 
        if (a[i] > a[i + 1]) {
            ll check = a[i] - a[i + 1];
            a[i] -= check;
            ans += check;
        }
        if (a[i + 2] > a[i + 1]) {
            ll check = a[i + 2] - a[i + 1];
            a[i + 2] -= check;  
            ans += check;
        }
        if (a[i + 2] + a[i] > a[i + 1]) {
            ll check = (a[i + 2] + a[i]) - a[i + 1];
            a[i + 2] -= check;
            ans += check;
        }
    }

    cout << ans << "\n";
}

int main(){
    ios::sync_with_stdio(false);  
    cin.tie(nullptr);             

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
