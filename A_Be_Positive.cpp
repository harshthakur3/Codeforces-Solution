#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        int neg = 0, zero = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i] < 0) neg++;
            if(v[i] == 0) zero++;
        }
        cout << zero + (neg%2)*2 << endl;

    }
}