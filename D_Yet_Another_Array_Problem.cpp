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
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        int temp =  v[0];
        for(int i = 0; i < n; i++){
            temp = __gcd(temp, v[i]);
        }

        if(temp == 1){
            cout << 2 << endl;
        }
        else{
            for(int i = 2; i < 106; i++){
                if(__gcd(i, temp) == 1){
                    cout << i << endl;
                    break;
                }
            }
        }

    }
}