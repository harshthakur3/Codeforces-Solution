#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    long long t;
    cin >> t;
    
    while (t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        vector<int>even;
        int odd = -1;
        for(int i = 0; i < n; i++){
            if(v[i] % 2 == 0){
                even.push_back(v[i]);
            }else{
                odd = v[i];
            }
        }
        if(odd == -1 || even.size() == 0){
            cout << 0 << endl;
            continue;
        }
        int ans = even.size();
        for(auto eva : even){
            if(odd < eva){
                ans++;
                break;
            }
            odd += eva;
        }
        cout << ans << endl;
    }
    
    return 0;
}
