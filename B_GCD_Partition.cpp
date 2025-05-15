#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            sum += x;
            a[i] = sum;
        }
        int maxx = 0;
        for (int i = 0; i < n - 1; i++) { // Stop at n-2
            maxx = max(maxx, __gcd(a[i], sum - a[i]));
        }
        cout << maxx << endl;
    }
    return 0;
}