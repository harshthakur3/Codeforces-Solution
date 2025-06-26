#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    unordered_set<int> numbers;

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        numbers.insert(v[i]);
    }

    for (int k = 1; k <= 1024; ++k) {
        bool valid = true;
        for (int x : v) {
            if (numbers.find(x ^ k) == numbers.end()) {
                valid = false;
                break;
            }
        }
        if (valid) {
            cout << k << '\n';
            return;
        }
    }

    cout << -1 << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
