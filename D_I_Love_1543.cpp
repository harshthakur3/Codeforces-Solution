#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin >> t;
    long long test = 1;
    while (t--) {

        long long n, m;
        cin >> n >> m;
        vector<string> s(n);
        for (long long i = 0; i < n; ++i) {
            cin >> s[i];
        }

        long long top = 0, left = 0, bottom = n - 1, right = m - 1;
        long long ans = 0;

        // Loop until all elements are traversed
        while (top <= bottom && left <= right) {
            string t = "";

            // Move from left to right
            for (long long i = left; i <= right; i++) {
                t += s[top][i];
            }
            top++;

            // Move from top to bottom
            for (long long i = top; i <= bottom; i++) {
                t += s[i][right];
            }
            right--;

            // Move from right to left, if needed
            if (top <= bottom) {
                for (long long i = right; i >= left; i--) {
                    t += s[bottom][i];
                }
                bottom--;
            }

            // Move from bottom to top, if needed
            if (left <= right) {
                for (long long i = bottom; i >= top; i--) {
                    t += s[i][left];
                }
                left++;
            }
            t += t.substr(0, 3);
            for (long long i = 0; i <= t.size() - 4; i++) {
                if (t.substr(i, 4) == "1543") {
                    ans += 1;
                }
            }
        }
        
        cout << ans << endl;
    }

    return 0;
}
