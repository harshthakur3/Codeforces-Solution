#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int count = 0;
        bool flag = true;

        for (int i = n - 2; i >= 0; i--) {
            while (v[i] >= v[i + 1] && v[i] > 0) {
                v[i] /= 2;
                count++;
            }
            if (v[i] >= v[i + 1]) {
                flag = false;
                break;
            }
        }

        if (flag) cout << count << endl;
        else cout << -1 << endl;
    }

    return 0;
}
