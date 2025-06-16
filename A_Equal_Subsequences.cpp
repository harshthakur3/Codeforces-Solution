#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        long long n, k;
        cin >> n >> k;
        long long z = n - k;
        string s;

        if (k % 2 == 0) {
            // k even: split 1's around all the 0's
            long long half1 = k / 2;
            s = string(half1, '1')
              + string(z,   '0')
              + string(half1, '1');
        } else {
            // k odd => z must be even
            long long half0 = z / 2;
            s = string(half0, '0')
              + string(k,     '1')
              + string(half0, '0');
        }

        cout << s << "\n";
    }

    return 0;
}
