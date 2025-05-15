#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        ll x, y, k;
        cin >> x >> y >> k;
        ll a = ceil((double)x/k), b = ceil((double)y/k);
        ll ans = max(a, b)*2;
        if(a>b){
            ans--;
        }
        cout << ans << endl;
    }
    return 0;
}