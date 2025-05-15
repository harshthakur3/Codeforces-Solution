#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll lcm(ll a, ll b){
    return a/__gcd(a, b)*b;
}
int main(){
    ll n, ans;
    cin >> n;
    for(ll i = 1; i*i <= n; i++){
        if(lcm(i, n/i) == n){
            ans = i;
        }
    }
    cout << ans << " " << n/ans;
}