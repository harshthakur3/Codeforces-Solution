#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int q;
    cin >> q;
    while(q--){
        int k, n, a, b;
        cin >> k >> n >> a >> b;
        int ans = -1;
        int l = 0, r = n;
        while(l <= r){
            int mid = (l + r)/2;
            if(a*mid + (n - mid)*b < k){
                ans = mid;
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }

        cout << ans << endl;
    }
}