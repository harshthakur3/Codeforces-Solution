#include<bits/stdc++.h>
using namespace std;

void solve() {
    int l, r, x, a, b;
    cin >> l >> r >> x >> a >> b;

    if (a == b) {
        cout << 0 << endl;
    } 
    else if (abs(b - a) >= x) {
        cout << 1 << endl;
    } 
    else if ((abs(r - b) >= x && abs(r - a) >= x) || (abs(l - b) >= x && abs(l - a) >= x)) {
        cout << 2 << endl;
    } 
    else if ((abs(r - a) >= x && abs(r - l) >= x && abs(l - b) >= x) || 
             (abs(l - a) >= x && abs(l - r) >= x && abs(r - b) >= x)) {
        cout << 3 << endl;
    } 
    else {
        cout << -1 << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
