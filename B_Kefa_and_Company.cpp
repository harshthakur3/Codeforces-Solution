#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    
    sort(v.begin(), v.end());
    
    int j = 0;           
    int curr_sum = 0;    
    int maxi = 0;        
    
    for (int i = 0; i < n; i++) {
        curr_sum += v[i].second;
        
        while (v[i].first - v[j].first >= k) {
            curr_sum -= v[j].second;  
            j++;
        }
        
        maxi = max(maxi, curr_sum);
    }
    
    cout << maxi << endl;
    return 0;
}
