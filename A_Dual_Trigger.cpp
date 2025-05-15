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
        
        int ones = 0;
        vector<int> positions;
        
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') {
                ones++;
                positions.push_back(i);
            }
        }
        
        if (ones % 2 == 1) {
            cout << "NO" << endl;
        } else if (ones == 0) {
            cout << "YES" << endl;
        } else if (ones == 2) {
            if (positions[1] - positions[0] == 1) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
