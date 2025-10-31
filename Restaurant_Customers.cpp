#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int n;
    cin >> n;
    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        mp[a]++;      // interval shuru hua
        mp[b + 1]--;  // interval khatam
    }

    int maxi = 0, curr = 0;
    for (auto &it : mp) {
        curr += it.second;
        maxi = max(maxi, curr);
    }

    cout << maxi << '\n';
}
