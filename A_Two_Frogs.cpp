#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
       int n, a, b;
       cin >> n >> a >> b;
       int x = abs(a-b);
       if(x%2) cout << "NO" << endl;
       else cout << "YES" << endl;
    }
}
