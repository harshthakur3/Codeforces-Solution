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
        sort(v.rbegin(), v.rend());
        int sum = 0;
        for(int i = 0; i < n; i+=2){
            sum += v[i];
        }
        cout << sum << endl;
    }
}