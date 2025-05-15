#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> c(n);
        for (int i = 0; i < n; i++) {
            cin >> c[i];
        }
        sort(c.begin(), c.end());
        unordered_map<int, int> f;
        int m = 0, d = 0, l = 0;
        for (int r = 0; r < n; r++) {
            if (f[c[r]] == 0) {
                d++;  
            }
            f[c[r]]++;  

            while (d > k) {
                f[c[l]]--;  
                if (f[c[l]] == 0) {
                    d--;  
                }
                l++;  
            }
            if (r > 0 && (c[r] == c[r - 1] || c[r] == c[r - 1] + 1)) {
                m = max(m, r - l + 1);
            }
        }

        cout << m << endl; 
    }

    return 0;
}
