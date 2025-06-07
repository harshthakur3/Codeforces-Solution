#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, x;
        cin >> n >> k >> x;
        int mini = k*(k + 1)/2;
        int maxi = n*(n + 1)/2 - (n - k)*(n - k + 1)/2;
        //cout << mini << " " <<  maxi << endl;
        if(x <= maxi && x >= mini) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}