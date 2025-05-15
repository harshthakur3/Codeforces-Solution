#include <bits/stdc++.h>
using namespace std;

int guaranteePick(vector<int>& arr, int m, int k) {
    int n = arr.size();
    int maxResult = INT_MIN;
    for (int left = 0; left <= k; left++) {
        int right = k - left;
        if (left + right > n) continue; 
        int currentMax = INT_MIN;
        for (int i = 0; i <= left; i++) {
            int l = i;                    
            int r = n - 1 - (right - (k - i)); 
            int localMin = INT_MAX;
            for (int j = 0; j < m; j++) {
                localMin = min(localMin, max(arr[l + j], arr[r - (m - 1 - j)]));
            }

            currentMax = max(currentMax, localMin);
        }

        maxResult = max(maxResult, currentMax);
    }

    return maxResult;
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << guaranteePick(arr, m, k) << endl;
    return 0;
}
