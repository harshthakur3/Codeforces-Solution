#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        int odd = 0, even = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        sort(v.begin(), v.end());
        int flag = true;
        for(int i = 0; i < n - 1; i++){
            if(abs(v[i] - v[i + 1]) == 1){
                flag = false;
                break;
            }
        }
        if(mp[1] < 1){
            cout << "YES" << endl;
        }
        else{
            if(flag) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}