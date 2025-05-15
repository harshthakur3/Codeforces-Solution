#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n, a, b, c;
    cin >> n >> a >> b >> c;
    long long sum = a + b + c;
    long long complete_cycles = n / sum;
    long long remaining = n % sum;
    
    if (remaining == 0) {
        cout << complete_cycles * 3 << endl;
        return;
    }
    long long current_dist = complete_cycles * sum;
    for (int day = 1; day <= 3; day++) {
        if (day == 1) current_dist += a;
        else if (day == 2) current_dist += b;
        else current_dist += c;
        
        if (current_dist >= n) {
            cout << complete_cycles * 3 + day << endl;
            return;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}