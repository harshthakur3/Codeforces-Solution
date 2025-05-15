#include<bits/stdc++.h>
using namespace std;
#define int long long
long long combinations_formula(int n) {
    if(n < 2) return 0; 
    return (1LL * n * (n-1)) / 2;  
}
int32_t main() {
        int n;
        cin >> n;
        vector<int> v(n);
        int maxi = INT_MIN, mini = INT_MAX;
        
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            if(v[i] > maxi) maxi = v[i]; 
            if(v[i] < mini) mini = v[i];   
        }
        int max_count = 0, min_count = 0;
        for(int i = 0; i < n; i++) {
            if(v[i] == maxi) max_count++;
            if(v[i] == mini) min_count++;
        }
        if(maxi == mini){
            cout << maxi - mini << " " << combinations_formula(n) << endl;
        }
        else cout << maxi - mini << " " << max_count * min_count << endl;
    
    return 0;
}