#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) cin >> x;

    int lcm = 1;

    for (int i = n - 1; i > 0; --i) {
        if (v[i] % v[i - 1] == 0) continue;

        int g = __gcd(v[i], v[i - 1]);
        int ratio = v[i - 1] / g;

        lcm = (lcm * ratio) / __gcd(lcm, ratio);
    }

    cout << lcm << '\n';
}

int32_t main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
