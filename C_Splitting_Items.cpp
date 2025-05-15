#include <bits/stdc++.h>

#define int long long

signed main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n, k;
        std::cin >> n >> k;
        std::vector<int> A(n);
        for (int i = 0; i < n; i++) {
            std::cin >> A[i];
        }

        std::sort(A.begin(), A.end());
        for (int i = n - 2; i >= 0; i -= 2) {
            if (!k) break;
            int diff = A[i + 1] - A[i];
            A[i] += std::min(diff, k);
            k -= std::min(diff, k);
        }

        int a = 0, b = 0;
        for (int i = n - 1; i >= 0; i--) {
            if ((n - i) & 1) a += A[i];
            else b += A[i];
        }

        std::cout << a - b << std::endl;
    }
}