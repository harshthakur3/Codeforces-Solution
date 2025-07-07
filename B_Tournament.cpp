#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, p, k;
        cin >> n >> p >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int playerStrength = v[p - 1];
        if (k == 1) {
        
            int maxStrength = *max_element(v.begin(), v.end());
            cout << (playerStrength == maxStrength ? "YES\n" : "NO\n");
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}
