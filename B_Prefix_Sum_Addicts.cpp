#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(k);
        for (int i = 0; i < k; i++) {
            cin >> a[i];
        }
        
        int first = (a[0] / (n - k + 1)) + (a[0] % (n - k + 1) > 0);
        vector<int> b(k - 1);
        for (int i = 0; i < k - 1; i++) {
            b[i] = a[i + 1] - a[i];
        }
        
        bool valid = true;
        for (int i = 0; i < k - 1; i++) {
            if (b[i] < first) {
                valid = false;
                break;
            }
            first = b[i];
        }
        
        if (valid) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
}
