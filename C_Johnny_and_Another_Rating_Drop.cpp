#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans = 0;
        while(n){
            ans += n;
            n /= 2;
        }
        cout << ans << endl;
    }
}