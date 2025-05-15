#include <iostream>

int main() {
    long t;
    std::cin >> t;
    while (t--) {
        int n, k;
        std::cin >> n >> k;
        int md = 0, even = 0;
        bool div = false;
        for (int p = 0; p < n; p++) {
            int x;
            std::cin >> x;
            x %= k;
            if (x) {
                md = (md > x) ? md : x;
            } else {
                div = true;
            }
            if (x == 2) {
                ++even;
            }
        }

        if (div) {
            std::cout << "0\n";
        } else if (k == 4) {
            if (even >= 2) {
                std::cout << "0\n";
            } else if (even >= 1 || md == 3) {
                std::cout << "1\n";
            } else {
                std::cout << "2\n";
            }
        } else {
            std::cout << k - md << "\n";
        }
    }

    return 0;
}
