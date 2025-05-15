#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        vector<int> a(v.begin(), v.begin() + i + 1);
        sort(a.begin(), a.end());

        int sum = 0;
        for (int j = a.size() - 1; j >= 0; j -= 2) { 
            sum += a[j];
        }

        if (sum <= k) {
            ans = i + 1; 
        }
    }

    cout << ans << endl;

    return 0;
}
