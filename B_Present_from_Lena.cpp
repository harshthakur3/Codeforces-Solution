#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Returns the sum over all subarrays of (max – min)
    long stackingMoney(vector<int> &A) {
        int n = A.size();
        vector<long> Lmax(n), Rmax(n), Lmin(n), Rmin(n);
        stack<int> st;

        while (!st.empty()) st.pop();
        for (int i = 0; i < n; ++i) {
            while (!st.empty() && A[st.top()] <= A[i])
                st.pop();
            Lmax[i] = st.empty() ? (i + 1) : (i - st.top());
            st.push(i);
        }
        while (!st.empty()) st.pop();
        for (int i = n - 1; i >= 0; --i) {
            while (!st.empty() && A[st.top()] < A[i])
                st.pop();
            Rmax[i] = st.empty() ? (n - i) : (st.top() - i);
            st.push(i);
        }
        while (!st.empty()) st.pop();
        for (int i = 0; i < n; ++i) {
            while (!st.empty() && A[st.top()] >= A[i])
                st.pop();
            Lmin[i] = st.empty() ? (i + 1) : (i - st.top());
            st.push(i);
        }
        while (!st.empty()) st.pop();
        for (int i = n - 1; i >= 0; --i) {
            while (!st.empty() && A[st.top()] > A[i])
                st.pop();
            Rmin[i] = st.empty() ? (n - i) : (st.top() - i);
            st.push(i);
        }
        long total = 0;
        for (int i = 0; i < n; ++i) {
            total += A[i] * (Lmax[i] * Rmax[i]);
            total -= A[i] * (Lmin[i] * Rmin[i]);
        }
        return total;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    Solution sol;
    cout << sol.stackingMoney(A) << "\n";
    return 0;
}
