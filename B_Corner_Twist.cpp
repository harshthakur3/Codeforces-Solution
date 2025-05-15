#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, m;
    cin >> n >> m;
    ll A[n][m];
    ll B[n][m];

    for (ll i = 0; i < n; ++i) {
        for (ll j = 0; j < m; ++j) {
            char x;
            cin >> x;
            A[i][j] = x - '0';
        }
    }

    for (ll i = 0; i < n; ++i) {
        for (ll j = 0; j < m; ++j) {
            char x;
            cin >> x;
            B[i][j] = x - '0';
        }
    }
    for (ll i = 0; i < n; ++i) {
        for (ll j = 0; j < m; ++j) {
            A[i][j] = A[i][j] + B[i][j];
        }
    }

    bool flag = true;
    for (int i = 0; i < n ; ++i) {
        for (int j = 0; j < m; ++j) {
            if (A[i][j] != B[i][j]) {
                flag = false;
                break;
            }
        }
    }

    if(flag){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int main() {

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
