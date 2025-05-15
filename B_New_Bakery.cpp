#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n, a, b;
        cin >> n >> a >> b;
        unsigned long long money = 0;

        if (b <= a) {
            money = n * a;
        } else {
            long long k = min(b - a, n);
            money += (k * (2 * b - k + 1)) / 2;
            money += (n - k) * a;
        }

        cout << money << endl;
    }
    return 0;
}
