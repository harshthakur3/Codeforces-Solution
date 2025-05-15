#include <bits/stdc++.h>
using namespace std;
#define int long long

int observe(int l, int r, int k) {
    if (r - l + 1 < k) return 0;
    int m = (l + r) / 2;
    int len = r - l + 1;
    if (len % 2) {
        int sum = m;
        sum += 2*observe(m + 1, r, k); // Process right half
        return sum;
    } else {
        return 2 * observe(l, m, k); // Use symmetry
    }
}

void solve() {
    int n, k;
    cin >> n >> k;
    cout << observe(1, n, k) << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
