#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n), v1(n);
        long long int ans1 = 0, ans2 = 0, ans = 0;
        
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            v1[i] = v[i];
        }
        int temp5 = 0;
        for(int i = 0; i < n; i++) {
            if(v[i] == 1) temp5++;  
            else ans += temp5;
        }

        for(int i = 0; i < n; i++) {
            if(v[i] == 0) {
                v[i] = 1;
                break;
            }
        }
        
        int temp = 0;
        for(int i = 0; i < n; i++) {
            if(v[i] == 1) temp++;  
            else ans1 += temp;
        }
        
        for(int i = n - 1; i >= 0; i--) {
            if(v1[i] == 1) {
                v1[i] = 0;
                break;
            }
        }

        int temp1 = 0;
        for(int i = 0; i < n; i++) {
            if(v1[i] == 1) temp1++; 
            else ans2 += temp1;  
        }
        
        cout << max(ans, max(ans1, ans2)) << endl;
    }
    
    return 0;
}
