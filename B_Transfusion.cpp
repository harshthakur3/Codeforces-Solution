#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n + 1);
        int odd = 0, even = 0;

        for (int i = 1; i <= n; i++) {
            cin >> v[i];
            if (i % 2 == 0)
                even += v[i];
            else
                odd += v[i];
        }

        int e, o;
        if (n % 2 == 0) {
            e = n / 2;
            o = n / 2;
        } else {
            e = n / 2;
            o = e + 1;
        }
        if (odd % o == 0 && even % e == 0 && odd / o == even / e) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
