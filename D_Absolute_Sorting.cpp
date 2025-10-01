#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        long long low = 0, high = 1e18;

        for (int i = 0; i + 1 < n; i++) {
            if (v[i] < v[i+1]) {
                high = min(high, (v[i] + v[i+1]) / 2);
            } else if (v[i] > v[i+1]) {
                low = max(low, (v[i] + v[i+1] + 1) / 2);
            }
        }

        if (low <= high) cout << low << "\n";
        else cout << -1 << "\n";
    }
}
