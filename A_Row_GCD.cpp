#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    int g = 0;
    for(int i = 1; i < n; i++){
        g = __gcd(g, a[i] - a[0]);
    }
    for(int i = 0; i < m; i++){
        cout << abs(__gcd(a[0] + b[i], g)) << " ";
    }
}