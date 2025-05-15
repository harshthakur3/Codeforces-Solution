#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
        }

        int target = 2 * sum;
        int count = 0;  
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            v[i] *= n;
        }
        for (int i = 0; i < n; i++) {
            if (mp.find(target - v[i]) != mp.end()) {
                count += mp[target - v[i]];
            }
            mp[v[i]]++;
        }

        cout << count << endl;
    }
}
