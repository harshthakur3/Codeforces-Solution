#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        int xor_v = 0;
        for(int i = 0 ; i < n; i++){
            cin >> v[i];
            xor_v ^= v[i];
        }
        if(n%2){
            cout << xor_v << endl;
        }
        else{
            if(xor_v == 0){
                cout << 3 << endl;
            }
            else{
                cout << -1 << endl;
            }
        }
        
    }
}