#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        vector<int> v1 = v;
        sort(v1.begin(), v1.end());
        if(v1 == v) {
            cout << "YES" << endl;
        } else if(k == 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
