#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        int sum = 0, neg = 0;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if( x < 0) neg++;
            v[i] = abs(x);
            sum += v[i];
        }
        sort(v.begin(), v.end());
        if(neg%2){
            cout << sum - 2*v[0] << endl;
        }
        else{
            cout << sum << endl;
        }
    }
    return 0;
}