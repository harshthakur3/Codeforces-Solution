#include<bits/stdc++.h>
using namespace std;

#define int  long long
#define pb   push_back
#define endl "\n"
void solve(){

    int n,m;
    cin>>n>>m;
    vector<vector<int>>v(m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            v[j].pb(x);
        }
    }
    int ans=0;
    for(int i=0;i<m;i++){
        sort(v[i].begin(),v[i].end());
        int sum=v[i][0];
        for(int j=1;j<n;j++){
            ans+=((j*v[i][j])-sum);
            sum+=v[i][j];
        }
    }
    cout<<ans<<endl;

}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();  
    }
    return 0;
}