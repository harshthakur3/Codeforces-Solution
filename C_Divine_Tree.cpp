#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        if(m >= n && m <= n*(n + 1)/2){
            vector<int> vals(n);
            for(int i = 0; i < n; i++){
                vals[i] = i + 1;
            }
            int rem = n*(n + 1)/2 - m;
            for(int i = n - 1; i >= 0; i--){
                if(rem <= vals[i] - 1){
                    vals[i] -= rem;
                    rem = 0;
                }
                else{
                    rem -= (vals[i] - 1);
                    vals[i] = 1;
                }
                if(rem <= 0) break;
            }
            int root = *max_element(vals.begin(), vals.end());
            cout << root << endl;
            for(int i = 0; i < n; i++){
                if(vals[i] == i + 1){
                    if(vals[i] == root) continue;
                    cout << i + 1 << " " << root << endl;
                }
                else{
                    cout << i + 1 << " " << vals[i] << endl;
                }
            }
        }
        else{
            cout << -1 << endl;
        }
    }
}