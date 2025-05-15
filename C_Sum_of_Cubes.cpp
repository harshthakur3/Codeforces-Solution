#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        long long n; cin >> n;
        string ans = "NO";
        for(long long i = 1; i*i*i <= n; i++) {
            long long y = n - i*i*i;
            long long z = round(cbrt(y));
            if(z > 0 && z*z*z == y) {
                ans = "YES";
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}