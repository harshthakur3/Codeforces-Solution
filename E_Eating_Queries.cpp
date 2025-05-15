#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        sort(v.rbegin(), v.rend());

        vector<int> pref(n);
        pref[0] = v[0];
        for (int i = 1; i < n; i++) {
            pref[i] = pref[i - 1] + v[i];
        }

        while (k--) {
            int x;
            cin >> x;

            if (x > pref[n - 1]) {
                cout << -1 << endl;
            } else {
                
                int l = 0, r = n - 1;
                while (l < r) {
                    int mid = (l + r) / 2;
                    if (pref[mid] >= x) {
                        r = mid;
                    } else {
                        l = mid + 1;
                    }
                }
                cout << l + 1 << endl;
            }
        }
    }
    return 0;
}
