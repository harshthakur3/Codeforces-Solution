#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<ll> ans;
    for(ll i=0;i<n;i++){
        if(s[i]=='0'){
            ans.push_back(i+1);
        }
        
    }
    cout<<ans.size()<<endl;
    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
    
}

int main() {
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
