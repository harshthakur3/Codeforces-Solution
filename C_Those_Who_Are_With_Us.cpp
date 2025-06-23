#include <bits/stdc++.h>
using namespace std;

// ------------------ TEMPLATE START ------------------
#pragma GCC optimize("O3")
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vvb vector<vb>
#define vpp vector<pair<int, int>>
#define lp(i, a, b) for (int i = a; i < b; ++i)
#define fr(i, n) for (int i = 0; i < (n); i++)
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define nl cout << '\n'
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define mxe(v) *max_element((v).begin(), (v).end())
#define mne(v) *min_element((v).begin(), (v).end())
#define unq(v) (v).resize(distance((v).begin(), unique((v).begin(), (v).end())))
#define sz(v) ((int)(v).size())
#define io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
const int INF = 1e18;
const int MOD = 1e9 + 7;

// ------------------ SOLUTION LOGIC ------------------
int minimizeGridMax(int n, int m, const vvi &g) {
    map<int, int> freq;
    vi rMax(n), cMax(m), rGmax(n), cGmax(m);
    int mx = 0, second = 0;

lp(i, 0, n) {
    lp(j, 0, m) {
        int val = g[i][j];
        mx = max(mx, val);
        freq[val]++;
    }
}

lp(i, 0, n) {
    lp(j, 0, m) {
        rMax[i] = max(rMax[i], g[i][j]);
    }
}

lp(j, 0, m) {
    lp(i, 0, n) {
        cMax[j] = max(cMax[j], g[i][j]);
    }
}


    for (auto &[v, f] : freq) if (v != mx) second = max(second, v);

    lp(i, 0, n) lp(j, 0, m) if (g[i][j] == mx) rGmax[i]++, cGmax[j]++;

    int res = INF;
    lp(i, 0, n) {
        lp(j, 0, m) {
            bool clearsAll = (rGmax[i] + cGmax[j] - (g[i][j] == mx ? 1 : 0)) == freq[mx];
            int cur = clearsAll ? max({second, rMax[i] - (rMax[i] == mx), cMax[j] - (cMax[j] == mx)})
                                : max(mx, max(rMax[i], cMax[j]) - 1);
            res = min(res, cur);
        }
    }
    return res;
}

// ------------------ MAIN ------------------
int32_t main() {
    io;
    int T; cin >> T;
    while (T--) {
        int r, c; cin >> r >> c;
        vvi grid(r, vi(c));
        for (auto &row : grid) for (auto &el : row) cin >> el;
        cout << minimizeGridMax(r, c, grid) << '\n';
    }
    return 0;
}
