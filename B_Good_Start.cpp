#include <bits/stdc++.h>
using namespace std;
#define int long long 
void space(){
    int n, m, a, b, p, q, r, s;
    cin >> n >> m >> a >> b;
    cin >> p >> q >> r >> s;
    int u = ((p % a) + a) % a;
    int x = ((s % b) + b) % b;
    int v = ((r % a) + a) % a;
    int w = ((q % b) + b) % b;
    

    bool d = (w == x) && ((q != s) || (u == v));
    bool c = (u == v) && ((p != r) || (w == x));
    
    if (c || d) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        space();
    }
    return 0;
}
