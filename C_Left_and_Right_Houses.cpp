#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int left[2] = {0}, right[2] = {0};
        for (char c : s) {
            if (c == '0') right[0]++;
            else right[1]++;
        }

        int ans = -1;
        int val = INT_MAX;

        if ((n / 2) + (n % 2) <= right[1]) {
            val = n;
            ans = 0;
        }

        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                right[0]--;
                left[0]++;
            } else {
                right[1]--;
                left[1]++;
            }

            int leftcnt = left[0] + left[1];
            int rightcnt = right[0] + right[1];

            if ((leftcnt / 2) + (leftcnt % 2) <= left[0] && 
                (rightcnt / 2) + (rightcnt % 2) <= right[1]) {
                int hue = abs(rightcnt - leftcnt);
                if (hue < val) {
                    val = hue;
                    ans = i + 1;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
