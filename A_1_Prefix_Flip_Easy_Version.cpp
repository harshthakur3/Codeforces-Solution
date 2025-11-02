#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void space(){
        int n; string a,b;cin>>n>>a>>b;
        vector<int> temp;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i])
            temp.pb(i+1),
            temp.pb(1),
            temp.pb(i+1);
        }
        cout<<temp.size()<<" ";
        for(auto it:temp) cout<<it<<" "; 
        cout<<"\n";
}
int main(){
    ll int t=1;
    cin>>t;
    while(t--){
        space();
    }
}