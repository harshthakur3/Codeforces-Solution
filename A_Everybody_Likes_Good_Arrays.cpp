#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x%2 == 0){
                v[i] = 2;
            }
            else{
                v[i] = 1;
            }
        }
        
        int prev = v[0];
        int ans = 0;
        for(int i = 1; i < n; i++){
            if(v[i] != prev){
                prev = v[i];
            }
            else{
                ans++;
            }
        }
        cout << ans << endl;

    }
}