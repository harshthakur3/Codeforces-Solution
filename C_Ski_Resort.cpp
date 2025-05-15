#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
    ll int n, k, q;
    cin >> n >> k >> q;
    vector<ll int> a(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    ll int c = 0, ans = 0;
    for(int i = 0; i < n; i++){
        if(a[i] <= q) c++;
        else if(c >= k){
            ans += (c - k + 1)*(c - k + 2)/2;
            c = 0;
        }
        else{
            c = 0;
        }
    }
    if(c >= k){
        ans += (c - k + 1)*(c - k + 2)/2;
        c = 0;
    }
    cout << ans << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}