#include <bits/stdc++.h>
using namespace std;

const int N = sqrt(1e9);
vector<int> primes;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    set<int> used;
    for (int x : a) {
        for (int p : primes) {
            if (1LL * p * p > x) break;
            if (x % p == 0) {
                if (used.count(p)) {
                    cout << "YES\n";
                    return;
                }
                used.insert(p);
                while (x % p == 0) x /= p;
            }
        }
        if (x > 1) {
            if (used.count(x)) {
                cout << "YES\n";
                return;
            }
            used.insert(x);
        }
    }
    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> isprime(N + 1, 1);
    for (int i = 2; i <= N; i++) {
        if (isprime[i]) primes.push_back(i);
        for (int p : primes) {
            if (1LL * i * p > N) break;
            isprime[i * p] = 0;
            if (i % p == 0) break;
        }
    }

    int t;
    cin >> t;
    while (t--) solve();
}
