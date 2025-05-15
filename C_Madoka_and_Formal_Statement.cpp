#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    long long int a[n];
    long long int b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    bool ans = true;

    for(int i = 0; i < n; i++){
        if(a[i] > b[i]){
            ans = false;
            break;
        }else if(a[i] != b[i] && (b[i] - b[(i + 1) % n] > 1)){
            ans = false;
            break;
        }
    }
    if(ans){
        cout << "YES" <<endl;
    }else{
        cout << "NO" <<endl;
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        solve();
    }
}