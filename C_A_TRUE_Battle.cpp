#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int T;
    cin >> T;
    
    while (T--) {
        int n;
        string s;
        cin >> n >> s;
        if (s[0] == '1' || s.back() == '1') {
            cout << "YES\n";
        } 
        else {
            bool flag = false;
            for (int i = 1; i < n - 1; i++) {
                if (s[i] == '1' && s[i + 1] == '1') {
                    flag = true;
                    break;
                }
            }
            if (flag) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}
