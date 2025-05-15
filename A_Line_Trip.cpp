#include<iostream>
using namespace std;
void solve(){
    int n, x;
    cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int b = 2*(x - a[n - 1]);
    int maxi = max(a[0], b);
    for(int i = 0 ;i < n - 1 ; i++){
        int diff = abs(a[i] - a[i + 1]);
        maxi = max(maxi, diff);
    }
    
    cout << maxi << endl;
    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}