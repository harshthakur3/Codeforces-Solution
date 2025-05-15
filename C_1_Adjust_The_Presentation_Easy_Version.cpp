#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    vector<int> b;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }
    set<int> liquid;
    int curr = 0;
    for(int i = 0; i < m; ++i){
        if(curr < n && a[curr] == b[i]){
            liquid.insert(a[curr]);
            curr++;
        }
        else{
            if(liquid.find(b[i]) == liquid.end()){
                cout << "TIDAK\n";
                return;
            }
        }
    }
    cout << "YA\n";
}



int32_t main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}