#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int mx = -INT_MAX;
        for(int i = 1; i < n; i++){
            if(v[i] > v[i - 1]){
                mx = max(mx, i*(n - i));
            }
        }
        if(mx == -INT_MAX){
            cout << n/2 << endl;
        }
        else cout << mx << endl;
    }
}