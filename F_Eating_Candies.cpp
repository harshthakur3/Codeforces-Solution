#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n; 
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];  
        }
        int l = 0, r = n - 1;    
        int suml = v[l], sumr = v[r];  
        int ans = 0;            
        while (l < r) {
            if (suml == sumr) {
                ans =  l + 1 + n - r;  
            }
            if (suml < sumr) {
                l++;
                suml += v[l]; 
            } else {
                r--;
                sumr += v[r];  
            }
        }
        cout << ans << endl;  
    }
    return 0;
}
