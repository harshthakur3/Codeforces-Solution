#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, sum = 0;
        cin >> n;
        vector<int> v(2*n);
        for(int i = 0; i < 2*n ; i++){
            cin >> v[i];
            sum += v[i];
        }
        if(sum <= n){
            if(sum%2 == 0){
                cout << 0 << " " << sum << endl;
            }
            else{
                cout << 1 << " " << sum << endl;
            }
        }
        else{
            int extra = sum - n;
            int sum2 = sum - 2*extra;
            if(sum2%2 == 0){
                cout << 0 << " " << sum2 << endl;
            }
            else{
                cout << 1 << " " << sum2 << endl;
            }
        }

    }
}
