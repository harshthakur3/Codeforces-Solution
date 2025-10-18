#include <bits/stdc++.h>
using namespace std;

int msbPosition(int n) {
    int pos = -1;
    while (n > 0) {
        n >>= 1;
        pos++;
    }
    return pos;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int msba = msbPosition(a);
        int msbb = msbPosition(b);

        if (msbb > msba) {
            cout << -1 << endl;
        } else {
            int mask = (1 << (msba + 1)) - 1;
            int temp = (~a) & mask;

            int step1 = temp;
            a = a ^ temp;

            int step2 = (~b) & mask;
            a = a ^ step2;

            cout << 2 << endl;
            cout << step1 << " " << step2 << endl;
        }
    }
}
