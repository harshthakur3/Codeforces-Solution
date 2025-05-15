#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, sum = 0;
        cin >> n >> k;
        vector<int> v(n), pref(n + 1);
        pref[0] = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            sum += v[i];
        }
        sort(v.begin(), v.end());
        for(int i = 1; i <= n ; i++){
            pref[i] = pref[i - 1] + v[i - 1];
        }
        int ans = INT_MIN;
        for(int i = 0; i <= k; i++){
            int j = k - i;
            ans = max(ans,pref[n - j] - pref[2*i]);
        }
        cout << ans << endl;
    }
}