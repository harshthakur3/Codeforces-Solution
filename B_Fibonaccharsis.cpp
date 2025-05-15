#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    int n, k; 
    cin >> n >> k;
    int ans = 0;
    
    for (int i = 1; i <= n; i++){
        int a, b = i, c = n;
        
        for (int j = k - 2; j >= 1; j--){
            a = c - b;
            
            if (a < 0) break;
            if (a > b) {
                a = -1;
                break;
            }
            c = b;
            b = a;
        }
        
        if (a >= 0) {
            ans++;
        }
    }
    
    cout << ans << "\n";
}
}