#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    map<ll,ll>mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ll y=x%m;
        mp[y]++;
    }
    ll total=0;
    for(auto i : mp){
        if(i.first==0 && i.second>0) total++;
        else if(mp.count(m-i.first)==0) total+=i.second;
        else if(m-i.first == i.first){
            total++;
        } 
        else if(m-i.first>i.first){
            ll a=i.second;
            ll b=mp[m-i.first];
            if(abs(a-b)<=1) total++;
            else{
                int maxi = max(a, b);
                int mini = min(a, b);
                maxi -= mini + 1;
                total+=maxi;
                total++;
            }
        }
    }
    cout<<total<<"\n";
}
                
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}