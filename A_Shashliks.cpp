#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int k, a, b, x, y;
    cin >> k >> a >> b >> x >> y;

    auto f = [&](int s1, int i1, int s2, int i2) {
        int c1 = 0, r = k;
        if (r >= s1) {
            c1 = (r - s1) / i1 + 1;
            r -= c1 * i1;
        }
        int c2 = 0;
        if (r >= s2) {
            c2 = (r - s2) / i2 + 1;
        }
        return c1 + c2;
    };

    int p = f(a, x, b, y);
    int q = f(b, y, a, x);
    cout << max(p, q) << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
}
