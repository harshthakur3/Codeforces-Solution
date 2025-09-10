#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    if(k % 2 == 1){
        for(auto x : a){
            if(x % 2 == 1) cout << x + k << " ";
            else cout << x << " ";
        }
        cout << endl;
        return;
    }else{
        for(auto x : a){
            int f = x % (k + 1);
            cout << x + (f * k) << " ";
        }
        cout << endl;
        return;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) solve();
}