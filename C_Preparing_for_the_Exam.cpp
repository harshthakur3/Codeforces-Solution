#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    
    vector<int> missing(m), known(k);
    for (int i = 0; i < m; i++) {
        cin >> missing[i];
    }
    
    for (int i = 0; i < k; i++) {
        cin >> known[i];
    }

    if (k < n - 1) {
        for (int i = 0; i < m; i++) {
            cout << 0;
        }
        cout << endl;
        return;
    }

    if (k == n) {
        for (int i = 0; i < m; i++) {
            cout << 1;
        }
        cout << endl;
        return;
    }

    unordered_set<int> known_set(known.begin(), known.end());
    for (int i = 0; i < m; i++) {
        if (known_set.find(missing[i]) != known_set.end()) {
            cout << 0;
        } else {
            cout << 1;
        }
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
