#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

long long modExpo(long long base, long long exp, long long mod) {
    long long result = 1; 
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long ans = modExpo(n, k, MOD); 
        cout << ans << endl;
    }
    return 0;
}
