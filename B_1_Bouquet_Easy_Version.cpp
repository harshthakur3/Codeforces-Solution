#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, m;
        cin >> n >> m;
        vector<ll> v(n);
        for(int i = 0; i < n ; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        ll ans = 0, l = 0, r = 0;
        ll sum = 0;
        for(r = 0; r < n; r++){
            sum += v[r];
            
            
            while(l <= r && (v[r] - v[l] > 1 || sum > m)){
                sum -= v[l];
                l++;
            }
            ans = max(ans, sum);
            if(ans == m){
                break;
            }
        }
        cout << ans << endl;
    }
}