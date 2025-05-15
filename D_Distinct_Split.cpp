#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (n == 0) {
            cout << 0 << endl;
            continue;
        } else if (n == 1) {
            cout << 1 << endl;
            continue;
        }

        unordered_map<char, int> s1, s2;
        vector<int> pre(n), post(n);

        for (int i = 0; i < n; i++) {
            s1[s[i]]++;
            pre[i] = s1.size();
        }
        for (int i = n - 1; i >= 0; i--) {
            s2[s[i]]++;
            post[i] = s2.size();
        }

        int maxi = 0;
        for (int i = 0; i < n - 1; i++) {
            maxi = max(maxi, pre[i] + post[i + 1]);
        }
        cout << maxi << endl;
    }
    return 0;
}
