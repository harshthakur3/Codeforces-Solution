#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n), pref(n);
        int sum = 0;
        bool isValid = true;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
            pref[i] = sum;
        }

        if (sum != 0) {
            cout << "No" << endl;
            continue;
        }

        bool hasZero = false, afterZeroNonZero = false;
        for (int i = 0; i < n; i++) {
            if (pref[i] < 0) {
                isValid = false;
                break;
            }
            if (pref[i] == 0) hasZero = true;
            if (hasZero && pref[i] != 0) afterZeroNonZero = true;
        }

        if (isValid && !afterZeroNonZero) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
