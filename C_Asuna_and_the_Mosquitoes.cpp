#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int odd = 0, even = 0;
        int sum = 0, maxi = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            maxi = max(maxi, x);
            sum += x;
            if(x % 2 == 0){
                even++;
            } else {
                odd++;
            }
        }

        if(even && odd){
            cout << sum - odd + 1 << endl;  
        }
        else{
            cout << maxi << endl;  
        }
    }
}