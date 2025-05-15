#include <bits/stdc++.h>
using namespace std;

long long MOD = 1e9 + 7;

long long mod_exp(long long base, long long exp, long long mod) {
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

    vector<int> n(t); 
    vector<int> k(t);

    for (int i = 0; i < t; i++) {
        cin >> n[i];
    }
    for (int i = 0; i < t; i++) {
        cin >> k[i];
    }

    for (int i = 0; i < t; i++) {
        cout << mod_exp(2, k[i], MOD) << endl;
    }

    return 0;
}
