#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> v;
        
        for (int i = 1; i <= n; ++i) {
            int x;
            cin >> x;
            v.push_back({x, i});
        }
        
        int count = 0;
        sort(v.begin(), v.end());
        
        for(int i=0;i<n - 1;i++){
            for(int j=i+1;j<n;j++){
                if((v[i].first*v[j].first)>(2*n-1)) break;
                if((v[i].first*v[j].first)==(v[i].second + v[j].second)) count++;
            }
        }
        
        cout << count << endl;
    }
    return 0;
}
