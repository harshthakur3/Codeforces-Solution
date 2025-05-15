#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool flag = true;

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < m - 1; j++) {
                int sum = (a[i][j] - '0') + (a[i + 1][j] - '0') + (a[i][j + 1] - '0') + (a[i + 1][j + 1] - '0');

                if (sum == 3) {
                    flag = false;
                }
            }
        }

        if (flag || (n == 1 || m == 1)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
