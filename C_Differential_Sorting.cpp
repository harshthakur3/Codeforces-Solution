#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin >> t; 
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        if(v[n - 1] < v[n - 2]){
            cout << -1 << endl;
        }
        else if(v[n - 1] >= 0){
            cout << n - 2 << endl;
            for(int i = 1; i <= n - 2; i++){
                cout << i << " " << n - 1 << " " << n << endl;
            }
        }
        else{
            if(is_sorted(v.begin() , v.end())){
                cout << 0 << endl;
            }
            else{
                  cout << -1 << endl;
            }
        }
    }
}