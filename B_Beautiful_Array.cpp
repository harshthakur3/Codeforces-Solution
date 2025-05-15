#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, k, b, s;
        cin >> n >> k >> b >> s;
        if (s < k * b || s > k * b + (k - 1) * n) {
            cout << -1 << endl;
        } 
        else {
            vector<ll> a(n, 0);
            a[0] = k * b;
            s -= k * b;
            for (ll i = 0; i < n; i++) {
                ll add = min(s, k - 1);
                a[i] += add;
                s -= add;
            }
            for (ll i = 0; i < n; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
