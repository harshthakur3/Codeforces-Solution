#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool found = false;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                cout << "YES" << endl;
                cout << 2 << endl;
                cout << a[i] << " " << a[i + 1] << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "NO" << endl;
        }
    }
}
