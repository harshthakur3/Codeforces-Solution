#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        int mx = 0;
        for (int i = 0; i < b.size(); i++) {
            int k = 0, c = 0, j = i;
            while (k < a.size()) {
                if (a[k] == b[j]) {
                    j++;
                    c++;
                }
                k++;
            }
            mx = max(c, mx);
        }
        cout << a.size() + b.size() - mx << endl;
    }
    return 0;
}
