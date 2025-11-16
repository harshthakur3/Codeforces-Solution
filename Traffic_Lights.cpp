#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int x, n;
    cin >> x >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    multiset<int> pos, dist;
    pos.insert(0);
    pos.insert(x);
    dist.insert(x);
    for(int i = 0; i < n; i++){
        pos.insert(v[i]);
        auto it = pos.find(v[i]); //pos.lower_bound(v[i]); bhi chal jayega
        int curr = *it;
        int nxt = *next(it);
        int prv = *prev(it);
        dist.erase(dist.find(nxt - prv));
        dist.insert(curr - prv);
        dist.insert(nxt - curr);
        cout << *dist.rbegin() << " ";
    }
}