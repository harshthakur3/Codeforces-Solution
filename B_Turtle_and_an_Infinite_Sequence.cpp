#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n, m;
    cin >> n >> m;
    int ans = max(0,n-m);
    while(ans < n+m){
        ans |= (ans+1);
    }
    cout << ans << endl;
}
     
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}