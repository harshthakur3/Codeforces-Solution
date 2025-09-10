#include <bits/stdc++.h>
using namespace std;
// Your smile is a poem the world longs to read,
// A gentle touch that plants a seed.
// In the garden of hearts where wild roses grow,
// It’s only your love I’ll ever know.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if ((double)b / (a + 1) > 2.0 || 
            (double)a / (b + 1) > 2.0 || 
            (double)(c - a) / (d - b + 1) > 2.0 || 
            (double)(d - b) / (c - a + 1) > 2.0) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
}
