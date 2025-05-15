#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        int ans = 0;
        for(int i = 1; i < x; i++) {
            for(int j = 1; j < x && i + j < x && i * j < n; j++) {
                int c = (n - i * j) / (i + j);
                if (j + i + c > x) {
                    c = x - (i + j);
                }
                ans += c;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
