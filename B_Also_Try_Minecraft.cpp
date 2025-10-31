#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> h(n + 1);
    for (int i = 1; i <= n; i++) cin >> h[i];

    vector<int> forward(n + 1, 0), backward(n + 2, 0);

    
    for (int i = 2; i <= n; i++) {
        if (h[i] < h[i - 1])
            forward[i] = forward[i - 1] + (h[i - 1] - h[i]);
        else
            forward[i] = forward[i - 1];
    }
    
    for (int i = n - 1; i >= 1; i--) {
        if (h[i] < h[i + 1])
            backward[i] = backward[i + 1] + (h[i + 1] - h[i]);
        else
            backward[i] = backward[i + 1];
    }

    while (m--) {
        int a, b;
        cin >> a >> b;
        if (a < b)
            cout << forward[b] - forward[a] << "\n";   
        else
            cout << backward[b] - backward[a] << "\n"; 
    }
}
