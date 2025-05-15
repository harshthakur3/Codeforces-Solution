#include <bits/stdc++.h>

int f(std::vector<int> &A) {
    int maxVal = *std::max_element(A.begin(), A.end());
    int minVal = *std::min_element(A.begin(), A.end());
    int d = maxVal + minVal;
    
    if (d % 2 != 0) return -1;

    d /= 2;
    for (int &i : A) {
        i = abs(i - d);
    }
    return d;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::vector<int> A(n);
        for (int &a : A) {
            std::cin >> a;
        }

        std::vector<int> steps;
        for (int i = 0; i < 40; i++) {
            int d = f(A);
            steps.push_back(d);

            if (d == -1 || d == 0) break;
        }

        if (steps.back() == -1 || steps.size() == 40) {
            std::cout << -1 << '\n';
        } else {
            steps.pop_back();
            std::cout << steps.size() << '\n';
            for (int d : steps) {
                std::cout << d << ' ';
            }
            std::cout << '\n';
        }
    }
}
