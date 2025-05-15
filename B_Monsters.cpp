#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool customCompare(pair<ll, ll> &a,pair<ll, ll> &b) {
    if (a.first != b.first)
        return a.first > b.first;
    return a.second < b.second;
}
void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    vector<ll> ans;
    while(true){
        ll index = -1;
        ll maxi = INT_MIN;
        for(int i = 0; i < n ; i++){
            if(maxi < v[i]){
                maxi = v[i];
                index = i;
            }
        }
        v[index] = v[index] - k;
        if(v[index] <= 0){
            ans.push_back(index + 1);
        }
        if(ans.size() == n){
            break;
        }
    }
    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            x = x%k;
            if(x == 0){
                x = k;
            }
            v[i] = x;
        }
        vector<pair<ll, ll>> v1;
        for(int i = 0; i < n ; i++){
            v1.push_back({v[i], i + 1});
        }
        sort(v1.begin(), v1.end(),customCompare);
        for(int i = 0; i < n; i++){
            cout << v1[i].second << " ";
        }
        cout << endl;
    }
}