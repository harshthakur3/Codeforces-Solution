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

        int a = 0, b = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a') a++;
            else b++;
        }

        if (a == b) {
            cout << 0 << endl;
            continue;
        }

        int diff = a - b;
        map<int, int> pref;
        pref[0] = 0;
        int curr = 0;
        int mini = n + 1;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'a') curr++;
            else curr--;

            int req = curr - diff;

            if (pref.count(req)) {
                mini = min(mini, (i + 1) - pref[req]);
            }

            pref[curr] = i + 1;
        }

        if (mini >= n) cout << -1 << endl;
        else cout << mini << endl;
    }
    return 0;
}
