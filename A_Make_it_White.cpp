#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        int b = 0, w = 0;
        cin >> n;
        char a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            if (a[i] == 'B') {
                b++;
                b = b + w;
                w = 0;
            } else {
                if (b != 0) w++;
            }
        }
        cout << b << endl;
    }

    return 0;
}
