#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, k, x;
    cin >> n >> k >> x;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    vector<long long> need;
    for (int i = 1; i < n; i++) {
        long long gap = v[i] - v[i - 1];
        if (gap > x) {
            long long required = (gap - 1) / x;
            need.push_back(required);
        }
    }

    sort(need.begin(), need.end());
    long long groups = need.size() + 1;

    for (auto req : need) {
        if (k >= req) {
            k -= req;
            groups--;
        } else break;
    }

    cout << groups << "\n";
}
