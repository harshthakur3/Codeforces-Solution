#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin >> t;

    while (t--) {
        long long int n;
        cin >> n;
        vector<long long int> a(n);

        // Input the array
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        map<long long int, long long int> m;
        long long int x = 0;

        // Process each element in the array
        for (long long int i = 0; i < n; i++) {
            while (a[i] != 0) {
                a[i] = a[i] >> 1;  // Right shift by 1
                x++;
            }
            m[x]++;
            x = 0;
        }

        long long int ans = 0;

        // Calculate the result based on the map
        for (auto x : m) {
            if (x.second > 1)
                ans = ans + (x.second * (x.second - 1)) / 2;
        }

        // Output the result
        cout << ans << endl;
        
    }

    return 0;
}
