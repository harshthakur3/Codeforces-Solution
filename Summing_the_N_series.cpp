#include<iostream>
using namespace std;
long long int m = 1000000007;
void solve(){
    long long int n, s;
    cin >> n;

    long long int sum = 0;
    //s = ((((n % m) * (n + 1)% m) % m) * ((2 * n) % m + 1) / 6) % m - (((((n - 1)% m) * (n% m)) % m) * ((2 * n) % m - 1) / 6) % m;
    cout << ((n%m)*(n%m))%m<< endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
