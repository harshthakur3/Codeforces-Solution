#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    map <int, int> m;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        m[a]++;
    }
    map<int, int>:: iterator i = m.begin();
    map<int, int>::iterator j = m.begin();
    j++;
    bool ans = true;
    if(m.size() > 2){
        ans = false;
    }
    if(m.size() == 2){
        if(abs((i -> second) - (j -> second)) > 1){
            ans = false;
        }
    }
    if(ans){
        cout << "YES" <<endl;
    }else{
        cout << "NO" <<endl;
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        solve();
    }
}