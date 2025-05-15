#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n, p;
    cin >> n >> p;
    vector<ll> v(n);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll ptr = n - 1;
    ll count = 0;
    
    while(n > 0){
        if((p)/v[ptr] + 1 > n){
            break;
        }
        else{
            n -= (p)/v[ptr] + 1;
            count++;
            ptr--;
        }
    }
    cout << count;
}
