#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int d = abs(a - b);
        if (d == 0) {
            cout << "0 0" << endl;  // already equal
        } else {
            cout << d << " " << min(b % d, d - (b % d)) << endl;
        }
    }
}
