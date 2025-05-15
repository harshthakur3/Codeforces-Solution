#include <bits/stdc++.h>

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    while (t--) {
        int n, x, y;
        std::cin >> n >> x >> y;

        std::vector<int> A(n + 1);
        for (int i = y; i <= x; i++) {
            A[i] = 1;
        }
        for (int i = y - 1; i > 0; i--) {
            if ((y - i) & 1) {
                A[i] = -1;
            }
            else {
                A[i] = 1;
            }
        }
        for (int i = x + 1; i <= n; i++) {
            if ((i - x) & 1) {
                A[i] = -1;
            }
            else {
                A[i] = 1;
            }
        }

        for (int i = 1; i <= n; i++) {
            std::cout << A[i] << ' ';
        }
        std::cout << '\n';
    }
}