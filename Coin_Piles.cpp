#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, sum = 0;
        cin >> a >> b;
        sum = a + b;
        if(a == 0 && b == 0) cout << "YES" << endl;
        else if(a == 0 || b == 0) cout << "NO" << endl;
        else if(a > 2*b || b > 2*a) cout << "NO" << endl;
        else{
            if(sum%3) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }
}