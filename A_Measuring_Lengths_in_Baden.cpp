#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    // Round to nearest inch under Baden rules:
    int total_inches = (n + 1) / 3;
    int feet  = total_inches / 12;
    int inch  = total_inches % 12;
    cout << feet << " " << inch << "\n";
    return 0;
}
