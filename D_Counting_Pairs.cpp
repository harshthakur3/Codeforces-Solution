#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> v(n);
        int totalSum = 0;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            totalSum += v[i];
        }

        sort(v.begin(), v.end());

        int count = 0;

        for (int i = 0; i < n; i++) {
            int remainingSum = totalSum - v[i];
            int minValue = remainingSum - y;
            int maxValue = remainingSum - x;
            auto lower = lower_bound(v.begin() + i + 1, v.end(), minValue) - v.begin();
            auto upper = upper_bound(v.begin() + i + 1, v.end(), maxValue) - v.begin() - 1;
            if (lower <= upper) {
                count += (upper - lower + 1);
            }
        }

        cout << count << endl;
    }

    return 0;
}
