#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j < k; ++j) {
                cout << char('a' + j);
            }
        }
        cout << endl;
    }

    return 0;
}
