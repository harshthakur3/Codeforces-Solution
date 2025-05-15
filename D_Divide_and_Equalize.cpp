#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    map<int, int> prime_factor_counts;
    for (int i = 0; i < n; ++i) {
        int x = v[i];
        for (int j = 2; j * j <= x; ++j) {
            while (x % j == 0) {
                prime_factor_counts[j]++;
                x /= j;
            }
        }
        if (x > 1) {
            prime_factor_counts[x]++;
        }
    }

    for (const auto& [prime, count] : prime_factor_counts) {
        if (count % n != 0) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
