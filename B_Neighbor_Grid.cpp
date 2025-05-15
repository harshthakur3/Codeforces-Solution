#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int a[n + 2][m + 2];

        for (int i = 0; i < n + 2; i++) {
            for (int j = 0; j < m + 2; j++) {
                a[i][j] = -1;
            }
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cin >> a[i][j];
            }
        }

        bool valid = true;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                int max_neighbors = 4;
                if (i == 1 || i == n) max_neighbors--;
                if (j == 1 || j == m) max_neighbors--;

                if (a[i][j] > max_neighbors) {
                    valid = false;
                }

                a[i][j] = max_neighbors;
            }
        }

        if (!valid) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }

        cout << endl;
    }

    return 0;
}