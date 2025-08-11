#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int smol = v[0];
        int large = v[n - 1];
        if(2*k < (large - smol)){
            cout << -1 << endl;
        }
        else{
            cout << smol + k << endl;
        }
    }
}