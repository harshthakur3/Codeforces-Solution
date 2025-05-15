#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n , k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    vector<int> ans(n,0);
    int count = 0;
    for(int i = n - 1; i >= 0; i--){
        count += a[i]/b[i];
    }
    if(count >= k){
        for(int i = n - 1; i >= 0; i--){
            ans[i] = min(k, a[i]/b[i]);
            k -= a[i]/b[i];
            if(k < 0) k = 0;
        }
    }
    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}