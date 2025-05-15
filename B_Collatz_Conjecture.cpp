#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;
        while (k--) {
            x++;
            while (x % y == 0) {
                x = x / y;
            }
        }
        cout << x << endl;
    }
    return 0;
}
