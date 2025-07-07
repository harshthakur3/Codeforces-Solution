#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> ans;
        for(int i = 0; i < n; i++){
            if(i == k) continue;
            ans.push_back(i);
        }

        if(ans.size() != n){
            ans.push_back(k);
        }

        for(int i = 0 ; i < n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}