#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int a, b, c;
        cin >> a >> b >> c;
        long long int ans = a + b / 3;
        b = b % 3;
        if (b == 1) {
            if (c < 2) {
                cout << -1 << endl;
                continue;
            } 
            else {
                ans += 1;
                c -= 2;
            }
        } 
        else if (b == 2) {
            if (c == 0) {
                cout << -1 << endl;
                continue;
            } 
            else {
                ans += 1;
                c -= 1;
            }
        }
        ans += c / 3;
        c = c % 3;
        if (c == 0) 
            cout << ans << endl;
        else 
            cout << ans + 1 << endl;
    }
    return 0;
}

