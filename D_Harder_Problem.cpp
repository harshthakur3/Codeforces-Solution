#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
        cin>>n;
        vector<int> v(n), v1;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(mp[v[i]]==0){
                v1.push_back(v[i]);
            }
            mp[v[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(mp[i]==0){
                v1.push_back(i);
            }
        }
        for(int i=0;i<n;i++){
            cout<<v1[i]<<" ";
        }
        cout<<endl;
}
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}