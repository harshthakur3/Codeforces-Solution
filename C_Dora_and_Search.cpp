#include <bits/stdc++.h>
using namespace std;
#define long long int
int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int max = n, min = 1;
        int l = 0, r = n - 1;

        while (l < r) {
            if (v[l] != max && v[l] != min && v[r] != max && v[r] != min) {
                break;
            }
            else if ((v[l] == max || v[l] == min) && (v[r] == max || v[r] == min)) {
                if (v[l] == max) max--;
                if (v[l] == min) min++;
                l++;
                
                if (v[r] == max) max--;
                if (v[r] == min) min++;
                r--;
            }
            else if (v[l] != max && v[l] != min) {
                if (v[r] == max) {
                    r--;
                    max--;
                } else if (v[r] == min) {
                    r--;
                    min++;
                }
            }
            else if (v[r] != max && v[r] != min) {
                if (v[l] == max) {
                    max--;
                    l++;
                } else if (v[l] == min) {
                    min++;
                    l++;
                }
            }
        }

        if (l < r) {
            cout << l + 1 << " " << r + 1 << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
