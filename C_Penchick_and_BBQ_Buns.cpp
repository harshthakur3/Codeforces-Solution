#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        if(n % 2 == 0) {
            for(int i = 1; i <= n/2; i++) cout << i << " " << i << " ";
            cout << endl;
        } 
        else if(n < 27) cout << -1 << endl;
        else {
            vector<int> v(n, 0);
            v[0] = 1, v[9] = 1, v[25] = 1, v[26] = 2, v[10] = 2;
            for(int i = 0, j = 3; i < n; i++, j++) {
                if(v[i] == 0){
                    v[i] = j;
                    v[i + 1] = j;
                    i++;
                }
            }
            for(int i : v) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}