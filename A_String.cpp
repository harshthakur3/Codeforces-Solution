#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        int count = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '1') {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}