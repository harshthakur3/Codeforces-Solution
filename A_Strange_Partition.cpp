#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int sum = 0, sum1 = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            sum += (x + k - 1) / k;  // same as ceil(x / k)
            sum1 += x;
        }
        int total_ceiled = (sum1 + k - 1) / k;  // ceil(sum1 / k)
        cout << total_ceiled << " " << sum << endl;
    }
}
