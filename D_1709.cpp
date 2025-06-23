#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tcs;
    cin >> tcs;
    while (tcs--) {
        int len;
        cin >> len;
        vector<int> arr(len), brr(len);

        for (int idx = 0; idx < len; idx++) {
            cin >> arr[idx];
        }

        for (int idx = 0; idx < len; idx++) {
            cin >> brr[idx];
        }

        vector<pair<int, int>> ops;

        int cnt = len;
        while (cnt--) {
            for (int idx = 0; idx + 1 < len; ++idx) {
                if (arr[idx] > arr[idx + 1]) {
                    swap(arr[idx], arr[idx + 1]);
                    ops.push_back({1, idx + 1});
                }
            }
        }

        cnt = len;
        while (cnt--) {
            for (int idx = 0; idx + 1 < len; ++idx) {
                if (brr[idx] > brr[idx + 1]) {
                    swap(brr[idx], brr[idx + 1]);
                    ops.push_back({2, idx + 1});
                }
            }
        }

        for (int idx = 0; idx < len; ++idx) {
            if (arr[idx] > brr[idx]) {
                swap(arr[idx], brr[idx]);
                ops.push_back({3, idx + 1});
            }
        }

        cout << ops.size() << '\n';
        for (int i = 0; i < ops.size(); i++) {
            cout << ops[i].first << ' ' << ops[i].second << '\n';
        }
    }

    return 0;
}
