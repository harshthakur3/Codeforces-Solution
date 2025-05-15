#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n + 1);
        int x, sum = 0, ss = 0;
        for (int i = 1; i <= n; i++) {
            cin >> x;
            v[i] = 0;
            while (x % 2 == 0) {
                x /= 2;
                sum++;
            }
            int j = i;
            while (j % 2 == 0) {
                j /= 2;
                v[i]++;
            }
        }
        sort(v.begin() + 1, v.end());
        for (int i = n; i >= 1; i--) {
            if (sum >= n) {
                cout << ss << endl;
                break;
            }
            sum += v[i];
            ss++;
        }
        if (sum < n) {
            cout << -1 << endl;
        }
    }

    return 0;
}
