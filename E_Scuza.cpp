#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> v(n), b(q), pref(n), maxi(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        pref[0] = v[0];
        maxi[0] = v[0];
        for (int i = 1; i < n; i++) {
            pref[i] = pref[i - 1] + v[i];
            maxi[i] = max(maxi[i - 1], v[i]);
        }

        while (q--) {
            int x;
            cin >> x;

            int l = 0, r = n - 1;
            int sum = 0;

            while (l <= r) {
                int mid = (l + r) / 2;
                if (maxi[mid] <= x) {
                    sum = pref[mid];
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }

            cout << sum << " ";
        }
        cout << endl;
    }
}
