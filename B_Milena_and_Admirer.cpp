#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
 
        long long ans = 0;
        long long allowed = a[n - 1];
 
        for (int i = n - 2; i >= 0; i--){
            long long parts = (a[i] + allowed - 1) / allowed;  
            ans += parts - 1;  
            allowed = a[i] / parts;  
        }
 
        cout << ans << "\n";
    }
 
    return 0;
}
