#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        if(k == 0){
            cout << 0 << endl;
        }
        else if(k <= n){
            cout << 1 << endl;
        }
        else {
            ll count = 1;
            k = k - n;
            n--;
            while(k > 0){
                k = k - n;
                count++;
                if(k <=0) break;
                k = k - n;
                count++;
                if(k <=0) break;
                n--;
            }
            cout << count << endl;
        }
    }
}