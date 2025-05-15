#include <bits/stdc++.h>
using namespace std;
#define int long long
int highestBit(int n) {
    return 1LL << (63 - __builtin_clzll(n));
}
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        if (n % 2 == 1) {
            cout << n << endl; 
            
            vector<int> v = {1, 3, n - 1, n};
            map<int, int> mp;
            for (int x : v) {
                mp[x]++;
            }

            for (int i = 1; i <= n; ++i) {
                if (mp[i] == 0) cout << i << " ";
            }

            for (int x : v) {
                cout << x << " ";
            }
            cout << endl;

        } else {

            if ((n & (n - 1)) == 0) { 
                vector<int> v = {1, 3, n - 2, n - 1, n};
                cout << ((1 & 3) | ((n - 2) & (n - 1)) | n) << endl;
                map<int, int> mp;
                for (int x : v) {
                    mp[x]++;
                }

                for (int i = 1; i <= n; ++i) {
                    if (mp[i] == 0) cout << i << " ";
                }
                for (int x : v) {
                    cout << x << " ";
                }
                cout << endl;

            } else { 
                int h = highestBit(n);
                vector<int> v = {n - 1, h - 1};
                map<int, int> mp;
                for (int x : v) {
                    mp[x]++;
                }
                cout << ((n - 1) | (h - 1)) << endl;
                for (int i = 1; i <= n; ++i) {
                    if (mp[i] == 0) cout << i << " ";
                }
                for (int x : v) {
                    cout << x << " ";
                }
                cout << endl;
            }
        }
    }

    return 0;
}
