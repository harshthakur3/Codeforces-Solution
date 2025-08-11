#include <bits/stdc++.h>
using namespace std;
#define int long long

bool check(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return (sum % 4 == 0);
}

signed main() {
    int n;
    cin >> n;
    while (!check(n)) {
        n++;
    }
    cout << n << "\n";
}
