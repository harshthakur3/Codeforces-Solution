#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    vector<long long> cnt(N + 1, 0);
    for (int x : A) cnt[x]++;

    long long ans = 0;
    for (int x = 1; x <= N; x++) {
        if (cnt[x] >= 2) {
            long long choose2 = cnt[x] * (cnt[x] - 1) / 2;
            ans += choose2 * (N - cnt[x]);
        }
    }

    cout << ans << "\n";
}
