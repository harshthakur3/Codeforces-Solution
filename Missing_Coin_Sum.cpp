#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int ans = 1;
    for(int i = 0; i < n; i++){
        if(v[i] <= ans){
            ans += v[i];
        }
        else{
            break;
        }
    }

    cout << ans << endl;
}