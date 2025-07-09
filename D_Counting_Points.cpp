#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> x(n), r(n);
        for(int i = 0; i < n; i++){
            cin >> x[i];
        }
        for(int i = 0; i < n; i++){
            cin >> r[i];
        }
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            int r1 = r[i], x1 = x[i] - r1, x2 = x[i] +  r1;
            for(int j = x2; j >= x1; j--){
                int dx = j - x[i];
                int d = r1*r1 - dx*dx;
                d = sqrt(d);
                if(mp[j] == 0 || mp[j] < d){
                    mp[j] = d;
                }
            }
        }

        int ans = mp.size();
        for(auto it : mp){
            ans += 2*mp[it.first];
        }
        cout << ans << endl;
    }
}