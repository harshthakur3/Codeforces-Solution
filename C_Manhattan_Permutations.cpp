#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t; 
    while (t--) {
        long long n, k;
        cin >> n >> k; 
        
        if (k % 2 != 0) {
            cout << "No" << endl;
        }
        
        else if (k > n * (n / 2) + (n / 2) * (n % 2)) {
            cout << "No" << endl;
        } else {
            vector<long long> a(n);
            for (long long i = 0; i < n; i++) {
                a[i] = i + 1;
            }
            cout << "Yes" << endl;

            long long l = 1, r = n, ans = 2 * abs(r - l), diff = 0;
            while (true) {
                if (k <= ans) break;
                l++;
                r--;
                ans += 2 * abs(r - l);
            }
            diff = (ans - k) / 2;
            for (long long i = 0; i < l - 1; i++) {
                swap(a[i], a[n - i - 1]);
            }
            swap(a[l - 1], a[r - diff - 1]);
            for (long long i = 0; i < n; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
