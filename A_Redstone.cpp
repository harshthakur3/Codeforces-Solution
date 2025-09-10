#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(auto &val : v) cin >> val;
        sort(v.begin(), v.end());
        bool flag = false;
        for(int i = 0; i < n - 1; i++){
            if(v[i] == v[i + 1]){
                flag = true;
                break;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}