#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long N, Q;
    cin >> N >> Q;
    
    vector<long long> A(N);
    for(long long i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    while(Q--) {
        long long K;
        cin >> K;
        
        // For each number x, x - (number of elements ≤ x in A)
        // gives us count of excluded numbers up to x
        long long l = 1, r = 2e18;
        while(l < r) {
            long long mid = l + (r - l)/2;
            
            // Count numbers in A less than or equal to mid
            long long count = 0;
            for(long long x : A) {
                if(x <= mid) count++;
            }
            
            // mid - count = number of excluded values up to mid
            if(mid - count < K) {
                l = mid + 1;
            } else {
                r = mid;
            }
        }
        
        cout << l << "\n";
    }
    
    return 0;
}