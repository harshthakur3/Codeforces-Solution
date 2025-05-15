#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int n, x;
    cin >> n >> x;
    vector<int> v(n), a(n + 1);
    a[0] = 0;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++) {
        a[i] = a[i - 1] + v[i - 1];
    }

    int index = upper_bound(a.begin(), a.end(), x) - a.begin();

    cout << index << endl;
    

    return 0;
}
