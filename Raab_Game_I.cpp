#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, a, b;
        cin >> n >> a >> b;

        if ((a + b) > n) {
            cout << "NO" << endl;
            continue;
        }

        if ((a + b) > 0 && (a == 0 || b == 0)) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
        ll draws = n - (a + b);
        ll sz = n - draws;

        for (int i = (b + 1); i <= sz; i++) {
            cout << i << " ";
        }

        for (int i = 1; i <= b; i++) {
            cout << i << " ";
        }

        for (int i = sz + 1; i <= n; i++) {
            cout << i << " ";
        }

        cout << endl;

        for (int i = 1; i <= n; i++) {
            cout << i << " ";
        }

        cout << endl;
    }
}
