#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()
const int mod=1e9+7;

void solve(){
int n; cin>>n;
vector<int>a(n);
map<int,int>mp;
bool flag =true;
for(int i=0;i<n;i++){ cin>>a[i];
  mp[a[i]]++;
  if(mp[a[i]]>=3) flag=false;
}
if(!flag){
    cout<<"NO"<<endl;
    return;
}
cout<<"YES"<<endl;
 vector<int>inc,dec;
 sort(all(a));
 inc.pb(a[0]);
 for(int i=1;i<n;i++){
    if(a[i]>a[i-1]) inc.pb(a[i]);
    else dec.pb(a[i]);
 } 

 sort(all(dec),greater<int>());
 
 cout<<inc.size()<<endl;
 for(int i=0;i<inc.size();i++) cout<<inc[i]<<" ";
 cout<<endl;

 cout<<dec.size()<<endl;
 for(int i=0;i<dec.size();i++) cout<<dec[i]<<" ";
 cout<<endl;


}
int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t = 1;
    //cin >> t;
    
    while (t--) {
        solve();
    }
    return 0;
}

