#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        vector<int> count;
        for (char ch = 'a'; ch <= 'z'; ch++) {
            int c = 0, maxi = 0;
            for (int j = 0; j < s.size(); j++) {
                if (s[j] != ch) {
                    c++;
                } else {
                    c = 0;
                }
                maxi = max(maxi, c);
            }
            count.push_back(maxi);
        }

        sort(count.begin(), count.end());

        if (count[0] == 0) {
            cout << 0 << endl;
        } else {
            int c = 0;
            while (count[0] > 1) {
                count[0] = (count[0]) / 2;
                c++;
            }
            cout << c + count[0] << endl;
        }
    }
}
