#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> v;
        for(int i = 1 ; i <= sqrt(n); i++){
            if(n%i == 0){
                v.push_back(i);
                if(i != n/i && n != n/i){
                    v.push_back(n/i);
                }
            }

        }
        ll ans = -1;
        ll mango = INT_MAX;
        for(ll i = 0 ; i  < v.size(); i++){
            ll temp = lcm(v[i], n - v[i]);
            if(temp <= mango){
                mango = temp;
                ans = v[i];
            }
        }
        cout << ans << " " << n - ans << endl;
    }
}