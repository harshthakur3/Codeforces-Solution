#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool compareBySecond(pair<ll, ll> &a,pair<ll, ll> &b) {
    return a.second<b.second;
}
void solve() {
    ll int n, p;
    cin >> n >> p;
    vector<ll int> a(n), b(n);
    
    for (ll int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (ll int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    vector<pair<ll int, ll int>> pairs(n);
    for (ll int i = 0; i < n; i++) {
        pairs[i] = {b[i], a[i]};
    }
    
    sort(pairs.begin(), pairs.end());
    
    ll int ans = p;
    ll int size = n - 1;
    
    for(auto it:pairs){
        if(size<=0) break;
        if(it.first<p){
            while(size>0 && it.second>0){
                ans+=it.first;
                size--;
                it.second--;
            }
        }
        else{
            ans+=p*size;
            break;
        }
            
    }
    
    cout << ans << endl;
}
void aditya(){
    int n,p;
        cin >> n >> p;
        ll copy=n-1;
        ll ans=0;
        vector<pair<ll,ll>> v(n);
        for(int i=0;i<n;i++) cin >> v[i].first;
        for(int i=0;i<n;i++) cin >> v[i].second;
        sort(v.begin(),v.end(), compareBySecond);
        for(int i=0;i<n;i++){
            if(copy>0){
                if(v[i].second<p){
                    ans+=(v[i].second)*(min(copy,(v[i].first)));
                    copy-=min(copy,v[i].first);
                }
                else break;
            }
            else break;
        }
        cout << ans+(copy+1)*p << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--){
        aditya();
    }
    return 0;
}
