#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];

    map<int,int> last;

    // last.reserve(n * 2);        //avoids tle

    int l = 0, best = 0;
    for (int r = 0; r < n; ++r) {
        auto it = last.find(v[r]);
        if (it != last.end() && it->second >= l) l = it->second + 1;
        last[v[r]] = r; 
        best = max(best, r - l + 1);
    }

    cout << best << '\n';
    return 0;
}
