#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            ans = __gcd(abs(v[i] - v[n - i - 1]), ans);
        }
        cout << ans << endl;
    }
}