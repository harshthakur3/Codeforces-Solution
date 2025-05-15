#include<bits/stdc++.h>
using namespace std;

bool valid(const vector<int>& arr, int n, int k) {
    set<int> or_set;
    for (int i = 0; i <= n - k; ++i) {
        int current_or = 0;
        for (int j = 0; j < k; ++j) {
            current_or = current_or | arr[i + j];
        }
        or_set.insert(current_or);
    }
    return or_set.size() == 1;
}

int main() {
    int t;
    cin >> t;
    vector<int> results;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        int l = 1;
        int r = n;
        int lone = n;

        while (l <= r) {
            int mid = (l + r) / 2;
            if (valid(arr, n, mid)) {
                lone = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        results.push_back(lone);
    }

    for (int i = 0; i < results.size(); i++ ) {
        cout << results[i] << "\n";
    }

    return 0;
}