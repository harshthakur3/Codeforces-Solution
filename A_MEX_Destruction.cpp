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
        int nonzero_segments = 0;
        bool in_segment = false;
        for (int i = 0; i < n; i++) {
            if (v[i] != 0) {
                if (!in_segment) {
                    nonzero_segments++;
                    in_segment = true;
                }
            } else {
                in_segment = false;
            }
        }
        if (nonzero_segments == 0) {
            cout << 0 << endl;
        } else if (nonzero_segments == 1) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }
    return 0;
}
