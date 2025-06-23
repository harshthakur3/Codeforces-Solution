#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll x, y;
        cin >> x >> y;
        ll ans = 0;
        string x1 = to_string(x);
        string y1 = to_string(y);
        ll z = (x + y) / 2;
        string z1 = to_string(z);
        
        ll i = 0;
        while (i < x1.length() && i < z1.length()) {
            if (x1[i] == z1[i]) {
                ans++;
            } else {
                break;
            }
            i++;
        }

        i = 0;
        while (i < y1.length() && i < z1.length()) {
            if (y1[i] == z1[i]) {
                ans++;
            } else {
                break;
            }
            i++;
        }

        cout << ans << endl;
    }
}
