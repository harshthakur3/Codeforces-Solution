#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x; cin >> n >> x;
        map <int, int> mp;
        for (int i = 0; i < n; i++){
            int y; cin >> y;
            mp[y]++;
        }
        int ans = 0;
        while (mp[ans]){
            int left = mp[ans] - 1;
            mp[ans + x] += left;
            ans++;
        }
    cout << ans << "\n";
    }
}