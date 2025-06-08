#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        int f = 0, l = 0;
        for(int i = 0; i < n; i++){
            if(v[i] == 1){
                f = i;
                break;
            }
        }
        for(int i = n - 1; i >= 0; i--){
            if(v[i] == 1){
                l = i;
                break;
            }
        }
        int size = abs(l - f) + 1;

        if(size <= x) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}