#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        
        vector<pair<long long int, long long int>> v1, v2, v3;
        
        for (long long int i = 1; i <= n; i++) {
            long long int x;
            cin >> x;
            v1.push_back(make_pair(x, i));
        }
        
        for (long long int i = 1; i <= n; i++) {
            long long int x;
            cin >> x;
            v2.push_back(make_pair(x, i));
        }
        
        for (long long int i = 1; i <= n; i++) {
            long long int x;
            cin >> x;
            v3.push_back(make_pair(x, i));
        }
        
        sort(v1.begin(), v1.end(), greater<pair<long long int, long long int>>());
        sort(v2.begin(), v2.end(), greater<pair<long long int, long long int>>());
        sort(v3.begin(), v3.end(), greater<pair<long long int, long long int>>());
        
        long long int res = 0;

        for (long long int i = 0; i < 3; i++) {
            for (long long int j = 0; j < 3; j++) {
                for (long long int k = 0; k < 3; k++) {
                    if (v1[i].second != v2[j].second && v1[i].second != v3[k].second && v2[j].second != v3[k].second) {
                        res = max((v1[i].first + v2[j].first + v3[k].first), res);
                    }
                }
            }
        }
        
        cout << res << endl;
    }
    
    return 0;
}
