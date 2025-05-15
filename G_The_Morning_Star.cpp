#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int, int> up, side, dig1, dig2;
        while(n--){
            int x , y;
            cin >> x >> y;
            up[x]++;
            side[y]++;
            dig1[x - y]++;
            dig2[x + y]++;
        }
        int ans = 0;
        for(auto it : up){
            ans += it.second*(it.second - 1);
        }
        for(auto it : side){
            ans += it.second*(it.second - 1);
        }
        for(auto it : dig1){
            ans += it.second*(it.second - 1);
        }
        for(auto it : dig2){
            ans += it.second*(it.second - 1);
        }
        cout << ans << endl;
    }
}