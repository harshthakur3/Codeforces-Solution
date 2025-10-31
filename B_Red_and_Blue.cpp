#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> r(n);
        for (int i = 0; i < n; i++) cin >> r[i];

        int m;
        cin >> m;
        vector<int> b(m);
        for (int i = 0; i < m; i++) cin >> b[i];

        int sum = 0, max_r = 0;
        for (int i = 0; i < n; i++) {
            sum += r[i];
            max_r = max(max_r, sum);
        }

        sum = 0;
        int max_b = 0;
        for (int i = 0; i < m; i++) {
            sum += b[i];
            max_b = max(max_b, sum);
        }

        cout << max_r + max_b << "\n";
    }
}
