#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;

        // Find the smallest perfect square >= l
        int sqrt_l = ceil(sqrtl(l));  // Starting integer for square root
        int lf = sqrt_l * sqrt_l;    // Smallest perfect square >= l

        // Find the largest perfect square <= r
        int sqrt_r = floor(sqrtl(r));
        int rf = sqrt_r * sqrt_r;  

        int start = 0;
        if((sqrt_l - 1)*(sqrt_l - 1) < l && ((sqrt_l - 1)*(sqrt_l - 1) + (sqrt_l - 1)) >= l){
            start = 2;
        }
        else if(((sqrt_l - 1)*(sqrt_l - 1) + (sqrt_l - 1)) < l && ((sqrt_l - 1)*(sqrt_l - 1) + 2*(sqrt_l - 1)) >= l){
            start = 1;
        }
        else if(((sqrt_l - 1)*(sqrt_l - 1) + 2*(sqrt_l - 1)) < l){
            start = 0;
        }
        int end = 0;

        if ((sqrt_r + 1)*(sqrt_r + 1) > r && (rf + 2*(sqrt_r)) <= r ){
            end = 2;
        } 
        else if ((sqrt_r * sqrt_r + sqrt_r) <= r && (rf + 2*(sqrt_r)) > r) {
            end = 1;
        } 
        else if ((sqrt_r * sqrt_r + sqrt_r) > r) {
            end = 0;
        }
        int squaree = sqrt_r - sqrt_l + 1;
        cout << (squaree - 1)*2 + squaree + start + end << endl;

    }
    return 0;
}
