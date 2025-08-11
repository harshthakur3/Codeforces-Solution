#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin >> t;
    while(t--){
        int n, x, y, z;
        cin >> n >> x >> y;
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> z;
            sum += z;
        }
        if(x%2 == y%2 && sum%2 == 0){
            cout << "Alice" << endl;
        }
        else if(x%2 == y%2 && sum%2 != 0){
            cout << "Bob" << endl;
        }
        else if(x%2 != y%2 && sum%2 != 0){
            cout << "Alice" << endl;
        }
        else{
            cout << "Bob" << endl;
        }
        
    }
}