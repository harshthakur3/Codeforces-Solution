#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n + 1), sum(n + 1);
    sum[0] = 0; 
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        sum[i] = sum[i - 1] + v[i]; 
    }

    int t;
    cin >> t; 

    while (t--) {
        int x;
        cin >> x;
        int l = 1, r = n; 
        int ans = 0;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (sum[mid] >= x) {
                ans = mid; 
                r = mid - 1; 
            } else {
                l = mid + 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
