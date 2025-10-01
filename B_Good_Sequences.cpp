#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    
    vector<vector<int>> dp(n, vector<int>(n+1, 0));

    for (int prev = -1; prev < n; prev++) {
        if (prev == -1 || (v[0] < v[prev] && gcd(v[0], v[prev]) > 1))
            dp[0][prev+1] = 1; 
        dp[0][prev+1] = max(dp[0][prev+1], 0); 
    }

    for (int i = 1; i < n; i++) {
        for (int prev = -1; prev < n; prev++) {
            int notPick = dp[i-1][prev+1];

        
            int pick = 0;
            if (prev == -1 || (v[i] < v[prev] && gcd(v[i], v[prev]) > 1)) {
                pick = 1 + dp[i-1][i+1];
            }

            dp[i][prev+1] = max(notPick, pick);
        }
    }

    cout << dp[n-1][0] << "\n"; 
    return 0;
}
