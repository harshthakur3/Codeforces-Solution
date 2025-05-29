#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        int maxi = 0, curr = 0;

        for (int c : v) {
            if (c == 0) {
                curr++;
                maxi = max(maxi, curr);
            } else {
                curr = 0;
            }
        }

        cout << maxi << endl;
    }
    return 0;
}
