#include<bits/stdc++.h>
using namespace std;
signed main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x == 0) ans++;
            else ans += x;
        }

        cout << ans << endl;
    }
}