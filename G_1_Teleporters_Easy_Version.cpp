#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int t;
    cin >> t;

    while (t--) {
        int n, c;
        cin >> n >> c;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            v[i] += (i + 1);
        }

        sort(v.begin(), v.end()); 
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (c >= v[i]) { 
                count++;
                c -= v[i];
            } else {
                break; 
            }
        }

        cout << count << endl;
    }

    return 0;
}
