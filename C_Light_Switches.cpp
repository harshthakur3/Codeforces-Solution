#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;

        long long k;
        cin >> k;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        vector<long long> b(n), c(n);
        for (int i = 0; i < n; i++) {
            long long start = 0, end = 1e9, ans = 1e9;
            while (start <= end) {
                long long mid = (start + end) / 2;
                long long val = a[i] + (k * (mid * 2));
                if (val >= a[n - 1]) {
                    ans = min(ans, mid);
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            }

            long long val1 = a[i] + k * ((ans - 1) * 2);
            long long val2 = a[i] + k * ans * 2;

            b[i] = val1;
            c[i] = val2;
        }

        vector<long long> d(n);
        for (int i = 0; i < n; i++) {
            if (a[n - 1] - b[i] < k) {
                d[i] = b[i];
            } else {
                d[i] = c[i];
            }
        }

        long long maxD = *max_element(d.begin(), d.end());
        long long minD = *min_element(d.begin(), d.end());

        if (maxD - minD >= k) {
            cout << -1 << endl;
        } else {
            cout << maxD << endl;
        }
    }
    return 0;
}

