#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define vi vector<int>
#define vll vector<ll>


#define f(i, a, b) for (int i = (a); i < (b); ++i)
#define rf(i, a, b) for (int i = (a); i >= (b); --i)


#define fastio()            \
    ios::sync_with_stdio(0); \
    cin.tie(0)


string solve(int n, const vll &v) {
    if (n == 1) {
        //cout << "1" << endl;
        return "1";
    }
    vll pre(n), suf(n);
    pre[0] = v[0];
    f(i, 1, n) pre[i] = min(pre[i - 1], v[i]);
    suf[n - 1] = v[n - 1];
    rf(i, n - 2, 0) suf[i] = max(suf[i + 1], v[i]);

    string res;
    f(i, 0, n) {
        if (v[i] == pre[i]) res += '1';
        else if (v[i] == suf[i]) res += '1';
        else res += '0';
    }
    return res;
}

int main() {
    fastio();
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vll v(n);
        f(i, 0, n) cin >> v[i];
        cout << solve(n, v) << "\n";
    }
    return 0;
}
