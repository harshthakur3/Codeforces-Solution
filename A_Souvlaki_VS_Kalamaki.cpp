#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n + 1);
        for(int i = 1; i <= n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        bool flag = true;
        for(int i = 2; i <= n; i += 2){
            if(v[i] != v[i + 1] && i != n){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}