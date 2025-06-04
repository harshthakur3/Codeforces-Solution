#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll count0=0,count1=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='0'){
            count0++;
        }
        else{
            count1++;
        }
    }
    while(k--){
        if(count0>=count1){
            count0-=2;
        }
        else{
            count1-=2;
        }
    }
    if(count0==count1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    cout<<endl;
}


int main() {
	
	ios::sync_with_stdio(false);
    cin.tie(NULL);
	
	ll t;
	cin>>t;
	while(t--){
	    solve();
	}

}
