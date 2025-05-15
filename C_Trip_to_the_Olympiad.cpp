#include <iostream>
using namespace std;
typedef long long ll;

void solve() {
    ll l, r;
    cin >> l >> r;   
    
    ll ans = 0, a, b, c;
    
    // First loop: Find a and b using bit operations
    for (int i = 63; i >= 0; i--) {
        ll b1 = 0;
        ll b2 = 0;
        
        // Check if ith bit is set in l
        if (l & (1ll << i)) {
            b1 = 1;
        }
        // Check if ith bit is set in r
        if (r & (1ll << i)) {
            b2 = 1;
        }
        
        // If bits are same
        if (b1 == b2) {
            ans += b1 * (1ll << i);
        }
        else {
            a = ans + (1ll << i);
            b = a - 1;
            break;
        }
    }
    
    // Second loop: Find c
    for (ll i = l; i <= r; i++) {
        if (i != a && i != b) {
            c = i;
            break;
        }
    }
    
    cout << a << " " << b << " " << c << endl;
    // Uncomment to print XOR sum
    // cout << (a ^ b + b ^ c + c ^ a) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;     // Number of test cases
    
    while (t--) {
        solve();
    }
    
    return 0;
}