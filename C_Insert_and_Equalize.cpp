#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> A(n);

        for (int &x : A) cin >> x;

        if (n == 1) {
            cout << "1\n";
            continue;
        }

        sort(A.begin(), A.end());

        vector<int> B(n);
        for (int i = 1; i < n; i++) {
            B[i] = A[i] - A[i - 1];
        }

        int hcf = B[1];
        for (int i = 2; i < n; i++) {
            hcf = __gcd(hcf, B[i]);
        }

        int ans = 0;
        for (int i = 0; i < n - 1; i++) {
            ans += (A[n - 1] - A[i]) / hcf;
        }

        int ctr = n - 2;
        while (ctr >= 0 && A[ctr] == A[ctr + 1] - hcf) {
            ctr--;
        }

        ans += (n - ctr - 1);


        cout << ans << "\n";

    }
}