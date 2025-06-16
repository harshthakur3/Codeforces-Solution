#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n), res;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int cur = -1;
    long long d = LLONG_MAX;
    for (int i = 0; i < n - 1; i++) {
        if (a[i + 1] - a[i] < d) {
            d = a[i + 1] - a[i];
            cur = i;
        }
    }

    if (cur == 0 || cur == n - 2) {
        if (a[1] - a[0] < a[n - 1] - a[n - 2]) {
            for (int i = 0; i < n; i++) {
                if (i == 1) continue;
                res.push_back(a[i]);
            }
            res.push_back(a[1]);
        } else {
            res.push_back(a[n - 2]);
            for (int i = 0; i < n; i++) {
                if (i == n - 2) continue;
                res.push_back(a[i]);
            }
        }
    } else {
        res.push_back(a[cur]);
        for (int i = cur + 2; i < n; i++) {
            res.push_back(a[i]);
        }
        for (int i = 0; i < cur; i++) {
            res.push_back(a[i]);
        }
        res.push_back(a[cur + 1]);
    }

    for (auto val : res) {
        cout << val << " ";
    }
    cout << "\n";
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
