#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        
        if (v[0] != 1) {
            cout << "NO" << endl;
            continue;
        }

        
        long long int sum = 1;
        bool possible = true;

        for (int i = 1; i < n; i++) {
            if (v[i] > sum) {
                possible = false;
                break;
            }
            sum += v[i];
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}