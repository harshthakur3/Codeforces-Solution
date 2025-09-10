#include <bits/stdc++.h>

using namespace std;

void solution() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (int &i : a) cin >> i, i = min(i % k, k - i % k);
    for (int &i : b) cin >> i, i = min(i % k, k - i % k);
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if (a == b) cout << "YES\n";
    else cout << "NO\n";
}

signed main(){
    int t = 1;
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}