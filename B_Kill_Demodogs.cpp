#include<bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long int n;
        cin >> n;

        long long ans = (((((n * (n + 1)) % MOD) * (4 * n - 1)) % MOD) * 337) % MOD;
        cout << ans << endl;
    }

    return 0;
}
