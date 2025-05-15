#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
    int n, k;
    cin >> n >> k;
    if(n == 1) {
        cout << 1 << "\n";
        cout << 1 << "\n";
        return;
    }
    if(k == 1 || k == n) {
        cout << -1 << "\n";
        return;
    }
    cout << 3 << "\n";
    
    if(k % 2 == 0){
        cout << 1 << " " << k << " " << k + 1 << "\n";
    }
    else{
        cout << 1 << " " << k - 1 << " " << k + 2 << "\n";
    }
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
