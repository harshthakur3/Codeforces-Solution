#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
    long long x, k;
    cin >> x >> k;

    auto isPrime = [](long long n) -> bool {
        if (n < 2) return false;
        if (n == 2 || n == 3) return true;
        if (n % 2 == 0) return false;
        for (long long i = 3; i * i <= n; i += 2) {
            if (n % i == 0)
                return false;
        }
        return true;
    };

    if (k == 1) {
        cout << (isPrime(x) ? "YES" : "NO") << endl;
    } else {
        if (x != 1) {
            cout << "NO" << endl;
        } else {
            long long ans = 0;
            bool overflow = false;

            for (int i = 0; i < k; i++) {
                if (ans > (LLONG_MAX - 1) / 10) {
                    overflow = true;
                    break;
                }
                ans = ans * 10 + 1;
            }

            if (overflow) {
                cout << "NO" << endl; 
            } else {
                cout << (isPrime(ans) ? "YES" : "NO") << endl;
            }
        }
    }

}
}
