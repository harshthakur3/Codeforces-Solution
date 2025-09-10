#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define test int T; cin >> T; while(T--)

void solve(){
    ll n, red, blue;
    cin >> n >> red >> blue;
    if((n%2 == red%2) && (red%2 == blue%2)){
        cout << "YES" << endl;
    }
    else if((n%2 != red%2) && (n%2 == blue%2) && blue > red){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
 
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test solve();
    return 0;
}
