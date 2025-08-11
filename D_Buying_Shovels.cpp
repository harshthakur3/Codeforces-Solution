#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int eliminateMaximum(vector<int> &A, vector<int> &B) {
        int n = A.size();
        vector<int> idx(n);
        // instead of iota(idx.begin(), idx.end(), 0);
        for (int i = 0; i < n; ++i) 
            idx[i] = i;

        sort(idx.begin(), idx.end(), [&](int i, int j) {
            return 1LL * A[i] * B[j] < 1LL * A[j] * B[i];
        });

        long time = 0;
        for (int k : idx) {
            if (1LL * A[k] <= time * B[k])
                return (int)time;
            time++;
        }
        return n;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int> A(N), B(N);
    for (int i = 0; i < N; ++i) cin >> A[i];
    for (int i = 0; i < N; ++i) cin >> B[i];

    Solution sol;
    cout << sol.eliminateMaximum(A, B) << "\n";
    return 0;
}
