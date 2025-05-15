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

        bool flag = false;
        vector<int> a(n, 0);
        a[0] = v[0];  
        for (int i = 1; i < n; i++) {
            a[i] = a[i - 1] + v[i];  

            if (v[i] > 0 && a[i - 1] - v[i] >= 0) {
                flag = true;  
            }
        }

        if (flag) {
            cout << -1 << endl;  
        } else {
            for (int i = 0; i < n; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
