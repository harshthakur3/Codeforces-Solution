#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        vector<vector<int>> mp(n + 1);
        for (int i = 0; i < n; i++) {
            mp[v[i]].push_back(i);
        }

        for (int i = 1; i <= n; i++) {
            if (mp[i].empty()) {
                cout << "0 "; 
                continue;
            }

            int count = 1;
            for (int j = 0; j < mp[i].size() - 1; j++) {
                if ((mp[i][j + 1] - mp[i][j]) % 2) {
                    count++;
                }
            }
            cout << count << " ";
        }
        cout << endl;  
    }
    return 0;
}
