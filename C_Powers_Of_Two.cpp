#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int c = __builtin_popcount(n);
    
    if (n < k || k < c) {
        cout << "NO" << endl;
        return 0;
    }

    multiset<int> S;

    for (int i = 0; i < 30; i++) {
        if (n & (1 << i)) {
            S.insert(1 << i);
        }
    }

    int count = k - S.size();
    
    while (count--) {
        auto it = prev(S.end()); 
        int x = *it;
        S.erase(it);
        S.insert(x / 2);
        S.insert(x / 2);
    }

    cout << "YES" << endl;
    for (int x : S) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
