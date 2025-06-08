#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define yes   cout << "YES\n"
#define no    cout << "NO\n"

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<ll> arr(n+1);
        for(int idx = 1; idx <= n; idx++){
            cin >> arr[idx];
        }

        // 1) Check arithmetic progression
        bool valid = true;
        ll delta = arr[2] - arr[1];
        if(n < 2) valid = false;
        if(valid){
            for(int idx = 3; idx <= n; idx++){
                if(arr[idx] - arr[idx-1] != delta){
                    valid = false;
                    break;
                }
            }
        }

        if(valid){
            // 2) Solve for operation counts
            ll target = arr[1] - delta;
            ll denominator = n + 1;
            if(target >= 0 && target % denominator == 0){
                ll cntB = target / denominator;    // number of type-2 ops
                ll cntA = cntB + delta;          // number of type-1 ops
                if(cntA >= 0){
                    // 3) Verify reconstruction
                    bool reconstructed = true;
                    for(int idx = 1; idx <= n; idx++){
                        ll expected = cntA * idx + cntB * (n - idx + 1);
                        if(arr[idx] != expected){
                            reconstructed = false;
                            break;
                        }
                    }
                    if(reconstructed) yes;
                    else             no;
                } else {
                    no;
                }
            } else {
                no;
            }
        } else {
            no;
        }
    }
    return 0;
}