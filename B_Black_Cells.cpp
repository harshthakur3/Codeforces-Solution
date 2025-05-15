#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        if(n%2 == 0){
            int ans = INT_MIN;
            for(int i = 0; i < n; i += 2){
                ans = max(ans, abs(v[i] - v[i + 1]));
            }
            cout << ans << endl;
        }
        else if(n == 1) cout << 1 << endl;
        else{
            vector<int> v1;
            
            for(int i = 0; i < n; i += 2){
                int ans = 1;
                for(int j = 0; j < n - 1; j++){
                    if(j != i){
                        ans = max(ans, abs(v[j] - v[j + 1]));
                        j++;
                    }
                }
                v1.push_back(ans);
            }
            sort(v1.begin(), v1.end());
            cout << v1[0] << endl; 
        }
    }
}