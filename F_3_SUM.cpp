#include <bits/stdc++.h>
using namespace std;
#define ll long long

void black_reznov() {
    ll int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        ll int x;
        cin >> x;
        v[i] = x % 10;
    }

    sort(v.begin(), v.end());
    vector<int> v1;
    int count[10] = {0};
    for (int i = 0; i < n; i++) {
        if (count[v[i]] < 3) {
            v1.push_back(v[i]);
            count[v[i]]++;
        }
    }

    int size = v1.size();
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            for (int k = j + 1; k < size; k++) {
                if ((v1[i] + v1[j] + v1[k]) % 10 == 3) {
                    cout << "YES" << endl;
                    return;
                }
            }
        }
    }

    cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        black_reznov();
    }
    return 0;
}
