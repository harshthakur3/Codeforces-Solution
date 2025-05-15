#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int v[n];
    
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int f = 0;

        for (int i = 0; i < n - 2; i++) {
            if (v[i] < 0) {
                cout << "NO" << endl;
                f = 1;
                break;
            }
            v[i + 1] -= v[i] * 2;
            v[i + 2] -= v[i];
            v[i] = 0;
        }

        if (f == 1) {
            
            continue;
        }

        int count = 0;
        for (int i = 0; i < n; i++) {
           if (v[i] == 0) count++;
        }

        if (count == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
