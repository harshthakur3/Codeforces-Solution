#include <iostream>
using namespace std;

bool canFormAP(int a, int b, int c) {
    // Try multiplying a
    if ((2 * b - c) > 0 && (2 * b - c) % a == 0) return true;

    // Try multiplying b
    if ((a + c) % (2 * b) == 0) return true;

    // Try multiplying c
    if ((2 * b - a) > 0 && (2 * b - a) % c == 0) return true;

    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        if (canFormAP(a, b, c)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
