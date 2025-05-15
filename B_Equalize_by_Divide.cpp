#include <bits/stdc++.h>
using namespace std;
#define int long long

void Solve() 
{
    int n; 
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    if(n == 1) {
        cout << 0 << "\n";
        return;
    }
    
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            for (int j = 0; j < n; j++) {
                if (a[j] != 1) {
                    cout << -1 << "\n";
                    return;
                }
            }
        }
    }
    
    vector<pair<int, int>> ops;
    for (int ch = 0; ch < n; ch++) {
        for (int i = ch + 1; i < n; i++) {
            while (a[i] != a[ch]) {
                if (a[i] > a[ch]) {
                    ops.push_back({i + 1, ch + 1});
                    a[i] = (a[i] + a[ch] - 1) / a[ch];
                } else {
                    ops.push_back({ch + 1, i + 1}); 
                    a[ch] = (a[ch] + a[i] - 1) / a[i];
                }
            }
        }
    }
    
    cout << ops.size() << "\n";
    for (auto x : ops) {
        cout << x.first << " " << x.second << "\n";
    }
}

int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        Solve();
    }

    return 0;
}
