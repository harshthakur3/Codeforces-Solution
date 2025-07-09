#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
 
    int x = 1 << (int)log2(n); // Equivalent to finding the highest power of 2 ≤ n
    int i = x - 1;
    int side = n ^ i;
 
    if (n + i > side && n + side > i && i + side > n) {
        cout << i << endl;
    } else {
        cout << -1 << endl;
    }}
}
