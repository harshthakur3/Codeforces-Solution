#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> v(n);
        
        for (int i = 0; i < n; i++) {
            cin >> v[i].first >> v[i].second;
        }

        sort(v.begin(), v.end(), [](pair<int, int>& a, pair<int, int>& b) {
            int maxA = max(a.first, a.second);
            int maxB = max(b.first, b.second);
            if (maxA == maxB) {
                return min(a.first, a.second) < min(b.first, b.second);
            }
            return maxA < maxB;
        });
        for (int i = 0; i < n; i++) {
            cout << v[i].first << " " << v[i].second << " ";
        }
        cout << endl;
    }

    return 0;
}
