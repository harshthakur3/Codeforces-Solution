#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        if(i <= m) cout << "OK" << endl;
        else cout << "Too Many Requests" << endl;
    }
}