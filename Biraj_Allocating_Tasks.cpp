#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll int n, k;
    cin >> n >> k;
    map <int, int> mp;
    ll int single = 0;
    ll int multiple = 0;
    for(int i = 0; i < n; i++){
        ll int x; cin >> x;
        if(mp[x] == 0){ // counting values which appeaed single time and more than one time
            single++;
        }else if(mp[x] == 1){
            single--;
            multiple++;
        }
        mp[x]++;
    }
    ll int delta = 2*k - single;
    //cout << delta << " "<< single << " " << multiple << endl;
    if(2*multiple >= delta && multiple <= delta){
        cout << "YES" <<endl;
    }else{
        cout << "NO" << endl;
    }
}

int main(){
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}
