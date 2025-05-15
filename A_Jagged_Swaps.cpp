#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    bool sorted = is_sorted(v.begin(), v.end());
    if (sorted) {
        cout << "YES" << endl;
        return;
    }
    for (int i = 1; i < n - 1; i++) {
        for(int j = 1; j < n - 1 ; j++){
            if (v[j] > v[j + 1] && v[j] > v[j - 1]) {
            swap(v[j], v[j + 1]);
        }
        }
    }   
    sorted = is_sorted(v.begin(), v.end());
    if (sorted) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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
