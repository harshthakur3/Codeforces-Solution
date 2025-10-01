#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int sum = 0;
        vector<int> v(n), bunch(k);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];  
        }
        for (int i = 0; i < k; i++) {
            cin >> bunch[i];
        }

        sort(v.rbegin(), v.rend()); 
        sort(bunch.begin(), bunch.end()); 

        int i = 0, j = 0;
        while (i < n && j < k) {
            i += bunch[j] - 1;   
            if (i < n) sum -= v[i]; 
            i++;
            j++;   
        }
        cout << sum << endl;
    }
}
