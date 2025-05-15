#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long l = 1, r = n*k;
        while(l < r){
            long long mid = l + (r - l)/2;
            long long not_divisible = mid - mid/n;
            if(not_divisible < k){
                l = mid + 1;
            } 
            else{
                r = mid;
            }
        }
        cout << l << "\n";
    }
    return 0;
}