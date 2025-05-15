#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    vector<int>v(n);
    int sum = 0;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
        mp[i] = v[i];
    }
    int solid = 0;
    while(q--){
        int t;
        cin >> t;
        if(t == 1){
            int i, x;
            cin >> i >> x;
            i--;
            if(mp[i] == 0){
                mp[i] = x;
                sum += x - solid;
            }
            else{
                sum -= mp[i];
                sum += x;
                mp[i] = x;
            }
            cout << sum << endl;
        }
        else{
            int x;
            cin >> x;
            solid = x;
            sum = solid*n;
            cout << sum << endl;
            mp.clear();
        }
    }
    
}