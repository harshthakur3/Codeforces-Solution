#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(a == 0 && b == 0) cout << "YES" << endl;
        else if(a == 0 || b == 0) cout << "NO" << endl;
        else if(a > b*2 || b > a*2) cout << "NO" << endl;
        else{
            if((a + b)%3) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }
}