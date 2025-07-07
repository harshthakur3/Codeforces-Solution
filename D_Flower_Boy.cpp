#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];


        int i = 0, j = 0, cnt = 0;
        while (i < n && j < m) {
            if (a[i] >= b[j]) {
                cnt++; i++; j++;
            } else {
                i++;
            }
        }
        if (cnt >= m) {
            cout << 0 << "\n";
            continue;
        }

    
        vector<int> pref(m+1, -1);
        int pa = 0;
        for (int k = 0; k < m; k++) {
            
            while (pa < n && a[pa] < b[k]) pa++;
            if (pa == n) {
                
                for (int x = k+1; x <= m; x++) pref[x] = n;
                break;
            }
            pref[k+1] = pa;
            pa++;
        }

    
        vector<int> suff(m+1, n);
        int sa = n-1;
        for (int k = m-1; k >= 0; k--) {
            while (sa >= 0 && a[sa] < b[k]) sa--;
            if (sa < 0) {
                for (int x = k; x >= 0; x--) suff[x] = -1;
                break;
            }
            suff[k] = sa;
            sa--;
        }

    
        int answer = -1;
        for (int k = 0; k < m; k++) {
            if (pref[k] < suff[k+1]) {
                if (answer < 0 || b[k] < answer) {
                    answer = b[k];
                }
            }
        }

        cout << answer << "\n";
    }
    return 0;
}
