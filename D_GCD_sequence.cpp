#include <bits/stdc++.h>
using namespace std;

typedef long long lli;

lli findMismatchIndex(vector<lli>& a) {
    lli n = a.size();
    for (lli i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            return i;
        }
    }
    return -1;
}

void solve() {
    lli n; 
    cin >> n;
    vector<lli> a(n);
    for(auto& x : a) cin >> x;

    vector<lli> seq;
    for (lli i = 0; i < n - 1; i++) {
        seq.push_back(__gcd(a[i], a[i + 1]));
    }

    lli index = findMismatchIndex(seq);
    if (index == -1) {
        cout << "YES\n";
        return;
    }

    vector<lli> ans1 = a, ans2 = a, ans3 = a;
    ans1.erase(ans1.begin() + index);
    ans2.erase(ans2.begin() + index + 1);
    ans3.erase(ans3.begin() + index + 2);

    vector<lli> seq1, seq2, seq3;
    for (lli i = 0; i < n - 2; i++) {
        seq1.push_back(__gcd(ans1[i], ans1[i + 1]));
        seq2.push_back(__gcd(ans2[i], ans2[i + 1]));
        seq3.push_back(__gcd(ans3[i], ans3[i + 1]));
    }

    if (findMismatchIndex(seq1) == -1 || findMismatchIndex(seq2) == -1 || findMismatchIndex(seq3) == -1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    lli t; 
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
