#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++) {
            v[i] = (s[i - 1] == '1') ? 1 : 0;
        }
        
        int ans = 0;

        for (int i = 1; i <= n; i++) {
            for (int j = i; j <= n; j += i) {
                if (v[j] == 0) {
                    ans += i; 
                    v[j] = -2; 
                } else if (v[j] == 1) {
                    break; 
                }
            }
        }

        cout << ans << endl;
    }
}
